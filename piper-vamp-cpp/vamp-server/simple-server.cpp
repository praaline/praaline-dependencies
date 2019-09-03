/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */
/*
    Piper C++

    An API for audio analysis and feature extraction plugins.

    Centre for Digital Music, Queen Mary, University of London.
    Copyright 2006-2016 Chris Cannam and QMUL.
  
    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use, copy,
    modify, merge, publish, distribute, sublicense, and/or sell copies
    of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR
    ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
    CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

    Except as contained in this notice, the names of the Centre for
    Digital Music; Queen Mary, University of London; and Chris Cannam
    shall not be used in advertising or otherwise to promote the sale,
    use or other dealings in this Software without prior written
    authorization.
*/

#include "vamp-json/VampJson.h"
#include "vamp-capnp/VampnProto.h"
#include "vamp-support/RequestOrResponse.h"
#include "vamp-support/CountingPluginHandleMapper.h"
#include "vamp-support/LoaderRequests.h"

#include <iostream>
#include <sstream>
#include <stdexcept>

#include <capnp/serialize.h>

#include <map>
#include <set>

// pid for logging
#ifdef _WIN32
#include <process.h>
static int pid = _getpid();
#else
#include <unistd.h>
static int pid = getpid();
#endif

// for _setmode stuff and _dup
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif

// for dup, open etc
#ifndef _WIN32
#include <fcntl.h>
#include <unistd.h>
#endif

using namespace std;
using namespace json11;
using namespace piper_vamp;
using namespace Vamp;

static string myname = "piper-vamp-simple-server";

static void version()
{
    cout << "2.0" << endl;
    exit(0);
}

static void usage(bool successful = false)
{
    cerr << "\n" << myname <<
        ": Load & run Vamp plugins in response to Piper messages\n\n"
        "    Usage: " << myname << " [-d] <format>\n"
        "           " << myname << " -v\n"
        "           " << myname << " -h\n\n"
        "    where\n"
        "       <format>: the format to read and write messages in (\"json\" or \"capnp\")\n"
        "       -d, --debug: also print debug information to stderr\n"
        "       -v, --version: print version number to stdout and exit\n"
        "       -h, --help: print this text to stderr and exit\n\n"
        "Expects Piper request messages in either Cap'n Proto or JSON format on stdin,\n"
        "and writes response messages in the same format to stdout.\n\n"
        "This server is intended for simple process separation. It's only suitable for\n"
        "use with a single trusted client per server invocation.\n\n"
        "The two formats behave differently in case of parser errors. JSON messages are\n"
        "expected one per input line; because the JSON support is really intended for\n"
        "interactive troubleshooting, any unparseable message is reported and discarded\n"
        "and the server waits for another message. In contrast, because of the assumption\n"
        "that the client is trusted and coupled to the server instance, a mangled\n"
        "Cap'n Proto message causes the server to exit.\n\n";
    if (successful) exit(0);
    else exit(2);
}

static CountingPluginHandleMapper mapper;

// We write our output to stdout, but want to ensure that the plugin
// doesn't write anything itself. To do this we open a null file
// descriptor and dup2() it into place of stdout in the gaps between
// our own output activity.

static int normalFd = -1;
static int suspendedFd = -1;

static void initFds(bool binary)
{
#ifdef _WIN32
    if (binary) {
        int result = _setmode(0, _O_BINARY);
        if (result == -1) {
            throw runtime_error("Failed to set binary mode on stdin");
        }
        result = _setmode(1, _O_BINARY);
        if (result == -1) {
            throw runtime_error("Failed to set binary mode on stdout");
        }
    }
    normalFd = _dup(1);
    suspendedFd = _open("NUL", _O_WRONLY);
#else
    (void)binary;
    normalFd = dup(1);
    suspendedFd = open("/dev/null", O_WRONLY);
#endif
    
    if (normalFd < 0 || suspendedFd < 0) {
        throw runtime_error("Failed to initialise fds for stdio suspend/resume");
    }
}

static void suspendOutput()
{
#ifdef _WIN32
    _dup2(suspendedFd, 1);
#else
    dup2(suspendedFd, 1);
#endif
}

static void resumeOutput()
{
    fflush(stdout);
#ifdef _WIN32
    _dup2(normalFd, 1);
#else
    dup2(normalFd, 1);
#endif
}

static RequestOrResponse::RpcId
readId(const piper::RpcRequest::Reader &r)
{
    int number;
    string tag;
    switch (r.getId().which()) {
    case piper::RpcRequest::Id::Which::NUMBER:
        number = r.getId().getNumber();
        return { RequestOrResponse::RpcId::Number, number, "" };
    case piper::RpcRequest::Id::Which::TAG:
        tag = r.getId().getTag();
        return { RequestOrResponse::RpcId::Tag, 0, tag };
    case piper::RpcRequest::Id::Which::NONE:
        return { RequestOrResponse::RpcId::Absent, 0, "" };
    }
    return { RequestOrResponse::RpcId::Absent, 0, "" };
}

static void
buildId(piper::RpcResponse::Builder &b, const RequestOrResponse::RpcId &id)
{
    switch (id.type) {
    case RequestOrResponse::RpcId::Number:
        b.getId().setNumber(id.number);
        break;
    case RequestOrResponse::RpcId::Tag:
        b.getId().setTag(id.tag);
        break;
    case RequestOrResponse::RpcId::Absent:
        b.getId().setNone();
        break;
    }
}

static RequestOrResponse::RpcId
readJsonId(const Json &j)
{
    RequestOrResponse::RpcId id;

    if (j["id"].is_number()) {
        id.type = RequestOrResponse::RpcId::Number;
        id.number = int(round(j["id"].number_value()));
    } else if (j["id"].is_string()) {
        id.type = RequestOrResponse::RpcId::Tag;
        id.tag = j["id"].string_value();
    } else {
        id.type = RequestOrResponse::RpcId::Absent;
    }

    return id;
}

static Json
writeJsonId(const RequestOrResponse::RpcId &id)
{
    if (id.type == RequestOrResponse::RpcId::Number) {
        return id.number;
    } else if (id.type == RequestOrResponse::RpcId::Tag) {
        return id.tag;
    } else {
        return Json();
    }
}

static Json
convertRequestJson(string input, string &err)
{
    Json j = Json::parse(input, err);
    if (err != "") {
        err = "invalid json: " + err;
        return {};
    }
    if (!j.is_object()) {
        err = "object expected at top level";
    } else if (!j["method"].is_string()) {
        err = "string expected for method field";
    } else if (!j["params"].is_null() && !j["params"].is_object()) {
        err = "object expected for params field";
    }
    return j;
}

RequestOrResponse
readRequestJson(string &err, bool &eof)
{
    RequestOrResponse rr;
    rr.direction = RequestOrResponse::Request;

    string input;
    if (!getline(cin, input)) {
        // the EOF case, not actually an error
        eof = true;
        return rr;
    }
    
    Json j = convertRequestJson(input, err);
    if (err != "") return {};

    rr.type = VampJson::getRequestResponseType(j, err);
    if (err != "") return {};

    rr.id = readJsonId(j);

    VampJson::BufferSerialisation serialisation =
        VampJson::BufferSerialisation::Array;

    switch (rr.type) {

    case RRType::List:
        rr.listRequest = VampJson::toRpcRequest_List(j, err);
        break;
    case RRType::Load:
        rr.loadRequest = VampJson::toRpcRequest_Load(j, err);
        break;
    case RRType::Configure:
        rr.configurationRequest = VampJson::toRpcRequest_Configure(j, mapper, err);
        break;
    case RRType::Process:
        rr.processRequest = VampJson::toRpcRequest_Process(j, mapper, serialisation, err);
        break;
    case RRType::Finish:
        rr.finishRequest = VampJson::toRpcRequest_Finish(j, mapper, err);
        break;
    case RRType::NotValid:
        break;
    }

    return rr;
}

void
writeResponseJson(RequestOrResponse &rr, bool useBase64)
{
    Json j;

    VampJson::BufferSerialisation serialisation =
        (useBase64 ?
         VampJson::BufferSerialisation::Base64 :
         VampJson::BufferSerialisation::Array);

    Json id = writeJsonId(rr.id);

    if (!rr.success) {

        j = VampJson::fromError(rr.errorText, rr.type, id);

    } else {
    
        switch (rr.type) {

        case RRType::List:
            j = VampJson::fromRpcResponse_List(rr.listResponse, id);
            break;
        case RRType::Load:
            j = VampJson::fromRpcResponse_Load(rr.loadResponse, mapper, id);
            break;
        case RRType::Configure:
            j = VampJson::fromRpcResponse_Configure(rr.configurationResponse,
                                                    mapper, id);
            break;
        case RRType::Process:
            j = VampJson::fromRpcResponse_Process
                (rr.processResponse, mapper, serialisation, id);
            break;
        case RRType::Finish:
            j = VampJson::fromRpcResponse_Finish
                (rr.finishResponse, mapper, serialisation, id);
            break;
        case RRType::NotValid:
            break;
        }
    }

    cout << j.dump() << endl;
}

void
writeExceptionJson(const exception &e, RRType type, RequestOrResponse::RpcId id)
{
    Json jid = writeJsonId(id);
    Json j = VampJson::fromError(e.what(), type, jid);
    cout << j.dump() << endl;
}

RequestOrResponse
readRequestCapnp(bool &eof)
{
    RequestOrResponse rr;
    rr.direction = RequestOrResponse::Request;

    static kj::FdInputStream stream(0); // stdin
    static kj::BufferedInputStreamWrapper buffered(stream);

    if (buffered.tryGetReadBuffer() == nullptr) {
        eof = true;
        return rr;
    }

    capnp::InputStreamMessageReader message(buffered);
    piper::RpcRequest::Reader reader = message.getRoot<piper::RpcRequest>();
    
    rr.type = VampnProto::getRequestResponseType(reader);
    rr.id = readId(reader);

    switch (rr.type) {

    case RRType::List:
        VampnProto::readRpcRequest_List(rr.listRequest, reader);
        break;
    case RRType::Load:
        VampnProto::readRpcRequest_Load(rr.loadRequest, reader);
        break;
    case RRType::Configure:
        VampnProto::readRpcRequest_Configure(rr.configurationRequest,
                                             reader, mapper);
        break;
    case RRType::Process:
        VampnProto::readRpcRequest_Process(rr.processRequest, reader, mapper);
        break;
    case RRType::Finish:
        VampnProto::readRpcRequest_Finish(rr.finishRequest, reader, mapper);
        break;
    case RRType::NotValid:
        break;
    }

    return rr;
}

void
writeResponseCapnp(RequestOrResponse &rr)
{
    capnp::MallocMessageBuilder message;
    piper::RpcResponse::Builder builder = message.initRoot<piper::RpcResponse>();

    buildId(builder, rr.id);
    
    if (!rr.success) {

        VampnProto::buildRpcResponse_Error(builder, rr.errorText, rr.type);

    } else {
        
        switch (rr.type) {

        case RRType::List:
            VampnProto::buildRpcResponse_List(builder, rr.listResponse);
            break;
        case RRType::Load:
            VampnProto::buildRpcResponse_Load(builder, rr.loadResponse, mapper);
            break;
        case RRType::Configure:
            VampnProto::buildRpcResponse_Configure(builder, rr.configurationResponse, mapper);
            break;
        case RRType::Process:
            VampnProto::buildRpcResponse_Process(builder, rr.processResponse, mapper);
            break;
        case RRType::Finish:
            VampnProto::buildRpcResponse_Finish(builder, rr.finishResponse, mapper);
            break;
        case RRType::NotValid:
            break;
        }
    }
    
    writeMessageToFd(1, message);
}

void
writeExceptionCapnp(const exception &e, RRType type, RequestOrResponse::RpcId id)
{
    capnp::MallocMessageBuilder message;
    piper::RpcResponse::Builder builder = message.initRoot<piper::RpcResponse>();

    buildId(builder, id);
    VampnProto::buildRpcResponse_Exception(builder, e, type);
    
    writeMessageToFd(1, message);
}

RequestOrResponse
handleRequest(const RequestOrResponse &request, bool debug)
{
    RequestOrResponse response;
    response.direction = RequestOrResponse::Response;
    response.type = request.type;

    switch (request.type) {

    case RRType::List:
        response.listResponse =
            LoaderRequests().listPluginData(request.listRequest);
        response.success = true;
        break;

    case RRType::Load:
        response.loadResponse =
            LoaderRequests().loadPlugin(request.loadRequest);
        if (response.loadResponse.plugin != nullptr) {
            mapper.addPlugin(response.loadResponse.plugin);
            if (debug) {
                cerr << "piper-vamp-server " << pid
                     << ": loaded plugin, handle = "
                     << mapper.pluginToHandle(response.loadResponse.plugin)
                     << endl;
            }
            response.success = true;
        }
        break;
        
    case RRType::Configure:
    {
        auto &creq = request.configurationRequest;
        if (!creq.plugin) {
            throw runtime_error("unknown plugin handle supplied to configure");
        }
            
        auto h = mapper.pluginToHandle(creq.plugin);
        if (mapper.isConfigured(h)) {
            throw runtime_error("plugin has already been configured");
        }

        if (creq.configuration.framing.stepSize == 0 ||
            creq.configuration.framing.blockSize == 0) {
            throw runtime_error("step and block size must be non-zero");
        }

        response.configurationResponse = LoaderRequests().configurePlugin(creq);
        
        if (!response.configurationResponse.outputs.empty()) {
            mapper.markConfigured
                (h,
                 creq.configuration.channelCount,
                 response.configurationResponse.framing.blockSize);
            response.success = true;
        }
        break;
    }

    case RRType::Process:
    {
        auto &preq = request.processRequest;
        if (!preq.plugin) {
            throw runtime_error("unknown plugin handle supplied to process");
        }

        auto h = mapper.pluginToHandle(preq.plugin);
        if (!mapper.isConfigured(h)) {
            throw runtime_error("plugin has not been configured");
        }

        int channels = int(preq.inputBuffers.size());
        if (channels != mapper.getChannelCount(h)) {
            throw runtime_error("wrong number of channels supplied to process");
        }
                
        const float **fbuffers = new const float *[channels];

        bool frequencyDomain =
            (preq.plugin->getInputDomain() == Vamp::Plugin::FrequencyDomain);
        int blockSize = mapper.getBlockSize(h);
        int inputBufferSize;
        if (frequencyDomain) {
            inputBufferSize = 2 * (blockSize / 2) + 2;
        } else {
            inputBufferSize = blockSize;
        }
        
        for (int i = 0; i < channels; ++i) {
            if (int(preq.inputBuffers[i].size()) != inputBufferSize) {
                ostringstream os;
                os << "wrong buffer size passed to process call as "
                   << (frequencyDomain ? "frequency" : "time")
                   << "-domain input on channel " << i << " with block size "
                   << blockSize << " (expected " << inputBufferSize
                   << " values, obtained " << preq.inputBuffers[i].size()
                   << ")" << ends;
                delete[] fbuffers;
                throw runtime_error(os.str());
            }
            fbuffers[i] = preq.inputBuffers[i].data();
        }

        response.processResponse.plugin = preq.plugin;
        response.processResponse.features =
            preq.plugin->process(fbuffers, preq.timestamp);
        response.success = true;

        delete[] fbuffers;
        break;
    }

    case RRType::Finish:
    {
        auto &freq = request.finishRequest;
        if (!freq.plugin) {
            throw runtime_error("unknown plugin handle supplied to finish");
        }

        response.finishResponse.plugin = freq.plugin;

        auto h = mapper.pluginToHandle(freq.plugin);
        // Finish can be called (to unload the plugin) even if the
        // plugin has never been configured or used. But we want to
        // make sure we call getRemainingFeatures only if we have
        // actually configured the plugin.
        if (mapper.isConfigured(h)) {
            response.finishResponse.features = freq.plugin->getRemainingFeatures();
        }

        // We do not delete the plugin here -- we need it in the
        // mapper when converting the features. It gets deleted in the
        // calling function.
        response.success = true;
        break;
    }

    case RRType::NotValid:
        break;
    }
    
    return response;
}

RequestOrResponse
readRequest(string format, bool &eof)
{
    if (format == "capnp") {
        return readRequestCapnp(eof);
    } else if (format == "json") {
        string err;
        auto result = readRequestJson(err, eof);
        if (err != "") throw runtime_error(err);
        else return result;
    } else {
        throw runtime_error("unknown input format \"" + format + "\"");
    }
}

void
writeResponse(string format, RequestOrResponse &rr)
{
    resumeOutput();
    if (format == "capnp") {
        writeResponseCapnp(rr);
    } else if (format == "json") {
        writeResponseJson(rr, false);
    } else {
        throw runtime_error("unknown output format \"" + format + "\"");
    }
    suspendOutput();
}

void
writeException(string format, const exception &e, RRType type, RequestOrResponse::RpcId id)
{
    resumeOutput();
    if (format == "capnp") {
        writeExceptionCapnp(e, type, id);
    } else if (format == "json") {
        writeExceptionJson(e, type, id);
    } else {
        throw runtime_error("unknown output format \"" + format + "\"");
    }
    suspendOutput();
}

int main(int argc, char **argv)
{
    if (argc != 2 && argc != 3) {
        usage();
    }

    bool debug = false;
    
    string arg = argv[1];
    if (arg == "-h" || arg == "--help") {
        if (argc == 2) {
            usage(true);
        } else {
            usage();
        }
    } else if (arg == "-v" || arg == "--version") {
        if (argc == 2) {
            version();
        } else {
            usage();
        }
    } else if (arg == "-d" || arg == "--debug") {
        if (argc == 2) {
            usage();
        } else {
            debug = true;
            arg = argv[2];
        }
    }
    
    string format = arg;

    if (format != "capnp" && format != "json") {
        usage();
    }

    try {            
        initFds(format == "capnp");
    } catch (exception &e) {
        cerr << "ERROR: " << e.what() << endl;
        exit(1);
    }

    suspendOutput();

    if (debug) {
        cerr << myname << " " << pid << ": waiting for format: " << format << endl;
        if (format == "json") {
            cerr << myname << " " << pid << ": to test the server, try {\"method\": \"list\"}" << endl;
        }
    }
    
    while (true) {

        RequestOrResponse request;
        
        try {

            bool eof = false;
            request = readRequest(format, eof);
            
            if (eof) {
                if (debug) {
                    cerr << myname << " " << pid << ": eof reached, exiting" << endl;
                }
                break;
            }

            if (debug) {
                cerr << myname << " " << pid << ": request received, of type "
                     << int(request.type)
                     << endl;
            }
            
        } catch (exception &e) {

            if (debug) {
                cerr << myname << " " << pid << ": error: " << e.what() << endl;
            }

            writeException(format, e, request.type, request.id);

            if (format == "capnp") {
                // Don't try to continue; we can't recover from a
                // mangled input stream. However, we can return a
                // successful error code because we are reporting the
                // status in our Capnp output stream instead
                if (debug) {
                    cerr << myname << " " << pid << ": not attempting to recover from capnp parse problems, exiting" << endl;
                }
                exit(0);
            }
        }

        try {
            RequestOrResponse response = handleRequest(request, debug);
            response.id = request.id;

            if (debug) {
                cerr << myname << " " << pid << ": request handled, writing response"
                     << endl;
            }
            
            writeResponse(format, response);

            if (debug) {
                cerr << myname << " " << pid << ": response written" << endl;
            }

            if (request.type == RRType::Finish) {
                auto h = mapper.pluginToHandle(request.finishRequest.plugin);
                if (debug) {
                    cerr << myname << " " << pid << ": deleting the plugin with handle " << h << endl;
                }
                mapper.removePlugin(h);
                delete request.finishRequest.plugin;
            }
            
        } catch (exception &e) {

            if (debug) {
                cerr << myname << " " << pid << ": error: " << e.what() << endl;
            }

            writeException(format, e, request.type, request.id);
        }
    }

    exit(0);
}
