/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */
/*
  Piper C++

  An API for audio analysis and feature extraction plugins.

  Centre for Digital Music, Queen Mary, University of London.
  Copyright 2006-2017 Chris Cannam and QMUL.
  
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

#ifndef PIPER_AUTO_PLUGIN_H
#define PIPER_AUTO_PLUGIN_H

#include "ProcessQtTransport.h"
#include "../CapnpRRClient.h"
#include "../Exceptions.h"

#include <cstdint>

namespace piper_vamp {
namespace client {

/**
 * AutoPlugin presents a Piper feature extractor in the form of a Vamp
 * plugin, managing its own single-use server instance. That is, the
 * distinguishing quality of AutoPlugin (in comparison with
 * PluginStub) is that it runs and terminates its own Piper server,
 * whose lifetime matches that of the plugin.
 *
 * Example usage:
 *
 *    Vamp::Plugin *plugin = 
 *        new AutoPlugin("piper-server-name.exe",
 *                       "vamp-example-plugins:zerocrossing",
 *                       44100.0f,
 *                       Vamp::HostExt::PluginLoader::ADAPT_ALL_SAFE,
 *                       nullptr);
 *    plugin->initialise(...);
 *    plugin->process(...);       <-- in the normal way for a Vamp plugin
 *    delete plugin;              <-- causes the server to exit
 *
 * AutoPlugin makes use of the Loader and PluginClient interfaces,
 * providing them its own transport layer object for its single server.
 *
 * Note that any method may throw ServerCrashed, RequestTimedOut or
 * ProtocolError exceptions.
 */
class PiperAutoPlugin : public Vamp::Plugin
{
public:
    /**
     * Construct a PiperAutoPlugin that runs an instance of the Piper
     * server with the given server name (executable path), requesting
     * the given plugin key from the server.
     *
     * \param adapterFlags a bitwise OR of the values in the
     * Vamp::HostExt::PluginLoader::AdapterFlags enumeration
     *
     * \param logger an optional callback for log messages. Pass a
     * null pointer to use cerr instead.
     */
    PiperAutoPlugin(std::string serverName,
                    std::string pluginKey,
                    float inputSampleRate,
                    int adapterFlags,
                    LogCallback *logger) : // logger may be nullptr for cerr
        Vamp::Plugin(inputSampleRate),
        m_logger(logger),
        m_transport(serverName, "capnp", logger),
        m_client(&m_transport, logger)
    {
        LoadRequest req;
        req.pluginKey = pluginKey;
        req.inputSampleRate = inputSampleRate;
        req.adapterFlags = adapterFlags;
        try {
            LoadResponse resp = m_client.load(req);
            m_plugin = resp.plugin;
        } catch (const ServerCrashed &c) {
            log(std::string("PiperAutoPlugin: Server crashed: ") + c.what());
            m_plugin = 0;
        }
    }

    virtual ~PiperAutoPlugin() {
        delete m_plugin;
        // The transport is a plain data member and will be deleted
        // here, which will have the effect of terminating the server
    }

    bool isOK() const {
        return (m_plugin != nullptr);
    }
    
    std::string getIdentifier() const override {
        return getPlugin()->getIdentifier();
    }

    std::string getName() const override {
        return getPlugin()->getName();
    }

    std::string getDescription() const override {
        return getPlugin()->getDescription();
    }

    std::string getMaker() const override {
        return getPlugin()->getMaker();
    }

    std::string getCopyright() const override {
        return getPlugin()->getCopyright();
    }

    int getPluginVersion() const override {
        return getPlugin()->getPluginVersion();
    }

    ParameterList getParameterDescriptors() const override {
        return getPlugin()->getParameterDescriptors();
    }

    float getParameter(std::string name) const override {
        return getPlugin()->getParameter(name);
    }

    void setParameter(std::string name, float value) override {
        getPlugin()->setParameter(name, value);
    }

    ProgramList getPrograms() const override {
        return getPlugin()->getPrograms();
    }

    std::string getCurrentProgram() const override {
        return getPlugin()->getCurrentProgram();
    }
    
    void selectProgram(std::string program) override {
        getPlugin()->selectProgram(program);
    }

    bool initialise(size_t inputChannels,
                            size_t stepSize,
                            size_t blockSize) override {
        return getPlugin()->initialise(inputChannels, stepSize, blockSize);
    }

    void reset() override {
        getPlugin()->reset();
    }

    InputDomain getInputDomain() const override {
        return getPlugin()->getInputDomain();
    }

    size_t getPreferredBlockSize() const override {
        return getPlugin()->getPreferredBlockSize();
    }

    size_t getPreferredStepSize() const override {
        return getPlugin()->getPreferredStepSize();
    }

    size_t getMinChannelCount() const override {
        return getPlugin()->getMinChannelCount();
    }

    size_t getMaxChannelCount() const override {
        return getPlugin()->getMaxChannelCount();
    }

    OutputList getOutputDescriptors() const override {
        return getPlugin()->getOutputDescriptors();
    }

    FeatureSet process(const float *const *inputBuffers,
                               Vamp::RealTime timestamp) override {
        return getPlugin()->process(inputBuffers, timestamp);
    }

    FeatureSet getRemainingFeatures() override {
        return getPlugin()->getRemainingFeatures();
    }

private:
    LogCallback *m_logger;
    ProcessQtTransport m_transport;
    CapnpRRClient m_client;
    Vamp::Plugin *m_plugin;
    Vamp::Plugin *getPlugin() const {
        if (!m_plugin) {
            log("PiperAutoPlugin: getPlugin() failed (caller should have called PiperAutoPlugin::isOK)");
            throw std::logic_error("Plugin load failed");
        }
        return m_plugin;
    }

    void log(std::string message) const {
        if (m_logger) m_logger->log(message);
        else std::cerr << message << std::endl;
    }
};

}
}

#endif

    
