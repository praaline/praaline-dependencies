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

#ifndef PIPER_CAPNP_CLIENT_H
#define PIPER_CAPNP_CLIENT_H

#include "Loader.h"
#include "PluginClient.h"
#include "PiperVampPlugin.h"
#include "SynchronousTransport.h"

#include "vamp-support/AssignedPluginHandleMapper.h"
#include "vamp-capnp/VampnProto.h"

#include <sstream>

#include <capnp/serialize.h>

//#define LOG_ENTRYPOINTS 1

#ifdef LOG_ENTRYPOINTS
#define LOG_E(x) log(x)
#else
#define LOG_E(x)
#endif

namespace piper_vamp {
namespace client {

/**
 * Client for a request-response Piper server, i.e. using the
 * RpcRequest/RpcResponse structures with a single process call rather
 * than having individual RPC methods, with a synchronous transport
 * such as a subprocess pipe arrangement. Only one request can be
 * handled at a time. This class is thread-safe if and only if it is
 * constructed with a thread-safe SynchronousTransport implementation.
 *
 * This class takes Vamp-like structures (Plugin and the classes in
 * vamp-support) and uses them to communicate with a Piper server
 * using the Cap'n Proto serialisation of the Piper API. The transport
 * layer (and thus the nature of the server) is defined by the
 * SynchronousTransport passed to the constructor.
 *
 * This class implements both the Loader interface (which constructs
 * PluginStub objects) and the PluginClient (which accepts PluginStubs
 * and maps them into Piper handles).
 */
class CapnpRRClient : public PluginClient,
                      public Loader
{
    // unsigned to avoid undefined behaviour on possible wrap
    typedef uint32_t ReqId;

    class CompletenessChecker : public MessageCompletenessChecker {
    public:
        State check(const std::vector<char> &message) const override {

            if (message.size() < sizeof(capnp::word)) {
                return Incomplete;
            }
            
            auto karr = toKJArray(message);
            size_t words = karr.size();
            size_t expected = capnp::expectedSizeInWordsFromPrefix(karr);

            // Lacking a way to definitively check whether a message
            // is valid or not, we would still like to trap obvious
            // cases where a programming mistake results in garbage
            // being returned from the server. We impose a limit on
            // message size and, if a prefix is projected to exceed
            // that limit, call it invalid. If an extractor wants to
            // return a feature set greater than a gigaword in size,
            // it'll just have to do it across multiple process calls.
            size_t limit = size_t(1) << 30;
            
//            cerr << "CompletenessChecker: message.size() = " << message.size()
//                 << ", words = " << words << ", limit = " << limit << ", expected = " << expected << endl;

            if (words > expected) {
                std::cerr << "WARNING: obtained more data than expected ("
                          << words << " " << sizeof(capnp::word)
                          << "-byte words, expected "
                          << expected << ")" << std::endl;
                return Complete;
            } else if (words == expected) {
                return Complete;
            } else if (expected > limit) {
                std::cerr << "WARNING: apparently invalid message prefix: have "
                          << words << " words in prefix, projected message size is "
                          << expected << " against limit of " << limit << std::endl;
                return Invalid;
            } else {
                return Incomplete;
            }
        }
    };
    
public:
    CapnpRRClient(SynchronousTransport *transport, //!!! ownership? shared ptr?
                  LogCallback *logger) : // logger may be nullptr for cerr
        m_logger(logger),
        m_transport(transport),
        m_completenessChecker(new CompletenessChecker) {
        transport->setCompletenessChecker(m_completenessChecker);
    }

    ~CapnpRRClient() {
        delete m_completenessChecker;
    }

    //!!! obviously, factor out all repetitive guff

    //!!! list and load are supposed to be called by application code,
    //!!! but the rest are only supposed to be called by the plugin --
    //!!! sort out the api here

    // Loader methods:

    ListResponse
    list(const ListRequest &req) override {

        LOG_E("CapnpRRClient::listPluginData called");
        
        checkServerOK();
        
        capnp::MallocMessageBuilder message;
        piper::RpcRequest::Builder builder = message.initRoot<piper::RpcRequest>();
        VampnProto::buildRpcRequest_List(builder, req);
        ReqId id = getId();
        builder.getId().setNumber(id);

        auto karr = call(message, "list", true);

        capnp::FlatArrayMessageReader responseMessage(karr);
        piper::RpcResponse::Reader reader = responseMessage.getRoot<piper::RpcResponse>();

        checkResponseType(reader, piper::RpcResponse::Response::Which::LIST, id);

        ListResponse lr;
        VampnProto::readListResponse(lr, reader.getResponse().getList());

        LOG_E("CapnpRRClient::listPluginData returning");
        
        return lr;
    }
    
    LoadResponse
    load(const LoadRequest &req) override {

        LOG_E("CapnpRRClient::loadPlugin called");
        
        checkServerOK();
        
        LoadResponse resp;
        PluginHandleMapper::Handle handle = serverLoad(req.pluginKey,
                                                       req.inputSampleRate,
                                                       req.adapterFlags,
                                                       resp.staticData,
                                                       resp.defaultConfiguration);

        Vamp::Plugin *plugin = new PiperVampPlugin(this,
                                                   req.pluginKey,
                                                   req.inputSampleRate,
                                                   req.adapterFlags,
                                                   resp.staticData,
                                                   resp.defaultConfiguration);

        m_mapper.addPlugin(handle, plugin);

        resp.plugin = plugin;

        LOG_E("CapnpRRClient::loadPlugin returning");
        
        return resp;
    }

    // PluginClient methods:
    
    virtual
    ConfigurationResponse
    configure(PiperVampPlugin *plugin,
              PluginConfiguration config) override {

        LOG_E("CapnpRRClient::configure called");

        checkServerOK();
        
        ConfigurationRequest request;
        request.plugin = plugin;
        request.configuration = config;

        capnp::MallocMessageBuilder message;
        piper::RpcRequest::Builder builder = message.initRoot<piper::RpcRequest>();

        VampnProto::buildRpcRequest_Configure(builder, request, m_mapper);
        ReqId id = getId();
        builder.getId().setNumber(id);

        auto karr = call(message, "configure", true);

        capnp::FlatArrayMessageReader responseMessage(karr);
        piper::RpcResponse::Reader reader = responseMessage.getRoot<piper::RpcResponse>();

        checkResponseType(reader, piper::RpcResponse::Response::Which::CONFIGURE, id);

        ConfigurationResponse cr;
        VampnProto::readConfigurationResponse(cr,
                                              reader.getResponse().getConfigure(),
                                              m_mapper);

        LOG_E("CapnpRRClient::configure returning");
        
        return cr;
    };
    
    virtual
    Vamp::Plugin::FeatureSet
    process(PiperVampPlugin *plugin,
            std::vector<std::vector<float> > inputBuffers,
            Vamp::RealTime timestamp) override {

        LOG_E("CapnpRRClient::process called");
        
        checkServerOK();
        
        ProcessRequest request;
        request.plugin = plugin;
        request.inputBuffers = inputBuffers;
        request.timestamp = timestamp;
        
        capnp::MallocMessageBuilder message;
        piper::RpcRequest::Builder builder = message.initRoot<piper::RpcRequest>();
        VampnProto::buildRpcRequest_Process(builder, request, m_mapper);
        ReqId id = getId();
        builder.getId().setNumber(id);

        auto karr = call(message, "process", false);

        capnp::FlatArrayMessageReader responseMessage(karr);
        piper::RpcResponse::Reader reader = responseMessage.getRoot<piper::RpcResponse>();

        checkResponseType(reader, piper::RpcResponse::Response::Which::PROCESS, id);

        ProcessResponse pr;
        VampnProto::readProcessResponse(pr,
                                        reader.getResponse().getProcess(),
                                        m_mapper);

        LOG_E("CapnpRRClient::process returning");
        
        return pr.features;
    }

    virtual Vamp::Plugin::FeatureSet
    finish(PiperVampPlugin *plugin) override {

        LOG_E("CapnpRRClient::finish called");
        
        checkServerOK();
        
        FinishRequest request;
        request.plugin = plugin;
        
        capnp::MallocMessageBuilder message;
        piper::RpcRequest::Builder builder = message.initRoot<piper::RpcRequest>();

        VampnProto::buildRpcRequest_Finish(builder, request, m_mapper);
        ReqId id = getId();
        builder.getId().setNumber(id);
        
        auto karr = call(message, "finish", true);

        capnp::FlatArrayMessageReader responseMessage(karr);
        piper::RpcResponse::Reader reader = responseMessage.getRoot<piper::RpcResponse>();

        checkResponseType(reader, piper::RpcResponse::Response::Which::FINISH, id);

        FinishResponse pr;
        VampnProto::readFinishResponse(pr,
                                       reader.getResponse().getFinish(),
                                       m_mapper);

        m_mapper.removePlugin(m_mapper.pluginToHandle(plugin));

        // Don't delete the plugin. It's the plugin that is supposed
        // to be calling us here
        
        LOG_E("CapnpRRClient::finish returning");
        
        return pr.features;
    }

    virtual void
    reset(PiperVampPlugin *plugin,
          PluginConfiguration config) override {

        // Reload the plugin on the server side, and configure it as requested

        log("CapnpRRClient: reset() called, plugin will be closed and reloaded");
        
        checkServerOK();
        
        if (m_mapper.havePlugin(plugin)) {
            (void)finish(plugin); // server-side unload
        }

        PluginStaticData psd;
        PluginConfiguration defaultConfig;
        PluginHandleMapper::Handle handle =
            serverLoad(plugin->getPluginKey(),
                       plugin->getInputSampleRate(),
                       plugin->getAdapterFlags(),
                       psd, defaultConfig);

        m_mapper.addPlugin(handle, plugin);

        (void)configure(plugin, config);
    }
    
private:
    AssignedPluginHandleMapper m_mapper;
    ReqId getId() {
        //!!! todo: mutex
        static ReqId m_nextId = 0;
        return m_nextId++;
    }

    static
    kj::Array<capnp::word>
    toKJArray(const std::vector<char> &buffer) {
        // We could do this whole thing with fewer copies, but let's
        // see whether it matters first
        size_t wordSize = sizeof(capnp::word);
        size_t words = buffer.size() / wordSize;
        kj::Array<capnp::word> karr(kj::heapArray<capnp::word>(words));
        memcpy(reinterpret_cast<char *>(karr.begin()),
               buffer.data(),
               words * wordSize);
        return karr;
    }

    void
    checkServerOK() {
        if (!m_transport->isOK()) {
            log("Piper server crashed or failed to start (caller should have checked this)");
            throw ServerCrashed();
        }
    }
    
    /**
     * Check (i) that the response has the same id as supplied (which
     * presumably is the corresponding request id) and (ii) that the
     * response has the expected type.
     *
     * Return only if both of these things are the case.
     * 
     * If the response has the right id but is an error response,
     * throw a ServiceError exception with the error response's
     * message in it.
     *
     * If the response has the wrong id, or if it has the wrong type
     * and is not an error response, throw ProtocolError. (i.e. for
     * cases having errors that are not conveyed through our official
     * error response.)
     */
    void
    checkResponseType(const piper::RpcResponse::Reader &r,
                      piper::RpcResponse::Response::Which type,
                      ReqId id) {
        
        if (ReqId(r.getId().getNumber()) != id) {
            std::ostringstream s;
            s << "checkResponseType: wrong response id (received "
              << r.getId().getNumber() << ", expected " << id << ")";
            log(s.str());
            throw ProtocolError("Wrong response id");
        }
        if (r.getResponse().which() != type) {
            if (r.getResponse().which() == piper::RpcResponse::Response::Which::ERROR) {
                int code;
                std::string message;
                VampnProto::readRpcResponse_Error(code, message, r);
                std::ostringstream s;
                s << "checkResponseType: received an error with message: "
                  << message;
                log(s.str());
                throw ServiceError(message);
            } else {
                std::ostringstream s;
                s << "checkResponseType: wrong response type (received "
                  << int(r.getResponse().which()) << ", expected " << int(type) << ")";
                log(s.str());
                throw ProtocolError("Wrong response type");
            }
        }
    }

    kj::Array<capnp::word>
    call(capnp::MallocMessageBuilder &message, std::string type, bool slow) {
        auto arr = capnp::messageToFlatArray(message);
        auto responseBuffer = m_transport->call(arr.asChars().begin(),
                                                arr.asChars().size(),
                                                type,
                                                slow);
        return toKJArray(responseBuffer);
    }
    
    PluginHandleMapper::Handle
    serverLoad(std::string key, float inputSampleRate, int adapterFlags,
               PluginStaticData &psd,
               PluginConfiguration &defaultConfig) {

        LoadRequest request;
        request.pluginKey = key;
        request.inputSampleRate = inputSampleRate;
        request.adapterFlags = adapterFlags;

        capnp::MallocMessageBuilder message;
        piper::RpcRequest::Builder builder = message.initRoot<piper::RpcRequest>();

        VampnProto::buildRpcRequest_Load(builder, request);
        ReqId id = getId();
        builder.getId().setNumber(id);

        auto karr = call(message, "load", false);

        capnp::FlatArrayMessageReader responseMessage(karr);
        piper::RpcResponse::Reader reader = responseMessage.getRoot<piper::RpcResponse>();

        checkResponseType(reader, piper::RpcResponse::Response::Which::LOAD, id);
        
        const piper::LoadResponse::Reader &lr = reader.getResponse().getLoad();
        VampnProto::readExtractorStaticData(psd, lr.getStaticData());
        VampnProto::readConfiguration(defaultConfig, lr.getDefaultConfiguration());
        return lr.getHandle();
    };     

private:
    LogCallback *m_logger;
    SynchronousTransport *m_transport; //!!! I don't own this, but should I?
    CompletenessChecker *m_completenessChecker; // I own this
    
    void log(std::string message) const {
        if (m_logger) m_logger->log(message);
        else std::cerr << message << std::endl;
    }
};

}
}

#endif
