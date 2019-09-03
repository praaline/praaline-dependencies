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

#ifndef PIPER_REQUEST_RESPONSE_H
#define PIPER_REQUEST_RESPONSE_H

#include "PluginStaticData.h"
#include "PluginConfiguration.h"

#include <map>
#include <string>

namespace piper_vamp {

/**
 * \class ListRequest
 * 
 * ListRequest is a structure containing the information needed to
 * list plugins.
 *
 * \see ListResponse
 */
struct ListRequest
{
    ListRequest() { } // no constraints by default

    std::vector<std::string> from;
};

/**
 * \class ListResponse
 * 
 * ListResponse is a structure containing the information returned by
 * PluginLoader when asked to list static information about the
 * available plugins.
 *
 * \see PluginStaticData
 */
struct ListResponse
{
    ListResponse() { } // empty by default
    
    std::vector<PluginStaticData> available;
};

/**
 * \class LoadRequest
 * 
 * LoadRequest is a structure containing the information necessary to
 * load a plugin. When a request is made to load a plugin using a
 * LoadRequest, the response is typically returned in a LoadResponse
 * structure.
 *
 * \see LoadResponse
 */
struct LoadRequest
{
    LoadRequest() : // invalid request by default
	inputSampleRate(0.f),
	adapterFlags(0) { }

    /**
     * PluginKey is a string type that is used to identify a plugin
     * uniquely within the scope of "the current system". For further
     * details \see Vamp::PluginLoader::PluginKey.
     */
    typedef std::string PluginKey;

    /**
     * The identifying key for the plugin to be loaded.
     */
    PluginKey pluginKey;

    /**
     * Sample rate to be passed to the plugin's constructor.
     */
    float inputSampleRate;

    /** 
     * A bitwise OR of the values in the PluginLoader::AdapterFlags
     * enumeration, indicating under which circumstances an adapter
     * should be used to wrap the original plugin.  If adapterFlags is
     * 0, no optional adapters will be used.
     *
     * \see Vamp::PluginLoader::AdapterFlags
     */
    int adapterFlags;
};

/**
 * \class LoadResponse
 * 
 * LoadResponse is a structure containing the information returned by
 * PluginLoader when asked to load a plugin using a LoadRequest.
 *
 * If the plugin could not be loaded, the plugin field will be 0.
 *
 * The caller takes ownership of the plugin contained here, which
 * should be deleted (using the standard C++ delete keyword) after
 * use.
 *
 * \see LoadRequest
 */
struct LoadResponse
{
    LoadResponse() : // invalid (failed) response by default
	plugin(0) { }

    /**
     * A pointer to the loaded plugin, or 0 if loading failed. Caller
     * takes ownership of the plugin and must delete it after use.
     */
    Vamp::Plugin *plugin;

    /**
     * The static data associated with the loaded plugin, that is, all
     * information about it that does not depend on its configuration
     * (parameters, programs, initialisation parameters). The contents
     * of this structure are only valid if plugin is non-0.
     *
     * Much of the data in here is duplicated with the plugin itself.
     */
    PluginStaticData staticData;

    /**
     * The default configuration for this plugin, that is, default
     * values for parameters etc. The contents of this structure are
     * only valid if plugin is non-0.
     */
    PluginConfiguration defaultConfiguration;
};

/**
 * \class ConfigurationRequest
 * 
 * A wrapper for a plugin pointer and PluginConfiguration, bundling up
 * the data needed to configure a plugin after it has been loaded.
 *
 * \see PluginConfiguration, ConfigurationResponse, LoadRequest, LoadResponse
 */
struct ConfigurationRequest
{
public:
    ConfigurationRequest() : // invalid request by default
	plugin(0) { }

    Vamp::Plugin *plugin;
    PluginConfiguration configuration;
};

/**
 * \class ConfigurationResponse
 *
 * The return value from a configuration request (i.e. setting the
 * parameters and initialising the plugin). If the configuration was
 * successful, the output list will contain the final
 * post-initialisation output descriptors and the required step and
 * block size. (The step and block size will usually match those
 * passed to configure, but may differ if the parameter settings
 * turned out to be incompatible with those.) If configuration failed,
 * the output list will be empty.
 *
 * \see PluginConfiguration, ConfigurationRequest, LoadRequest, LoadResponse
 */
struct ConfigurationResponse
{
public:
    ConfigurationResponse() : // failed by default
        plugin(0) { }

    Vamp::Plugin *plugin;
    Vamp::Plugin::OutputList outputs;
    StaticOutputInfo staticOutputInfo; // stuff not in Plugin::OutputDescriptor
    
    Framing framing;
};

/**
 * \class ProcessRequest
 *
 * A structure that bundles the necessary data for making a process
 * call: plugin, input buffers, and timestamp. Caller retains
 * ownership of the plugin, but the buffers are passed "by value" to
 * avoid ownership concerns. 
 *
 * \see Vamp::Plugin::process()
 */
struct ProcessRequest
{
public:
    ProcessRequest() : // invalid by default
        plugin(0) { }

    Vamp::Plugin *plugin;
    std::vector<std::vector<float> > inputBuffers;
    Vamp::RealTime timestamp;
};

/**
 * \class ProcessResponse
 *
 * A structure that bundles the data returned by a process call. This
 * is simply a FeatureSet wrapper that happens to reference the plugin
 * as well.
 *
 * \see FinishResponse, Vamp::Plugin::process()
 */
struct ProcessResponse
{
public:
    ProcessResponse() : // invalid by default
        plugin(0) { }

    Vamp::Plugin *plugin;
    Vamp::Plugin::FeatureSet features;
};

/**
 * \class FinishRequest
 *
 * A structure that bundles the necessary data for finishing
 * processing, i.e. calling getRemainingFeatures(). This consists only
 * of the plugin pointer. Caller retains ownership of the plugin.
 *
 * \see Vamp::Plugin::getRemainingFeatures()
 */
struct FinishRequest
{
public:
    FinishRequest() : // invalid by default
        plugin(0) { }

    Vamp::Plugin *plugin;
};


/**
 * \class FinishResponse
 *
 * A structure that bundles the data returned by a
 * getRemainingFeatures() call. This is identical to ProcessResponse.
 *
 * \see ProcessResponse, Vamp::Plugin::getRemainingFeatures()
 */
struct FinishResponse
{
public:
    FinishResponse() : // invalid by default
        plugin(0) { }

    Vamp::Plugin *plugin;
    Vamp::Plugin::FeatureSet features;
};

}

#endif
