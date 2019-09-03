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

#ifndef PIPER_LOADER_REQUESTS_H
#define PIPER_LOADER_REQUESTS_H

#include "PluginStaticData.h"
#include "PluginConfiguration.h"
#include "StaticOutputRdf.h"

#include <vamp-hostsdk/PluginLoader.h>

#include <map>
#include <string>
#include <iostream>

namespace piper_vamp {

class LoaderRequests
{
public:
    ListResponse
    listPluginData(ListRequest req) {

	auto loader = Vamp::HostExt::PluginLoader::getInstance();

//        std::cerr << "listPluginData: about to ask loader to list plugins" << std::endl;
        
        std::vector<std::string> keys;
        if (req.from.empty()) {
            keys = loader->listPlugins();
        } else {
            keys = loader->listPluginsIn(req.from);
        }

//        std::cerr << "listPluginData: loader listed " << keys.size() << " plugins" << std::endl;
        
	ListResponse response;
	for (std::string key: keys) {
//            std::cerr << "listPluginData: loading plugin and querying static data: " << key << std::endl;
	    Vamp::Plugin *p = loader->loadPlugin(key, 44100, 0);
	    if (!p) continue;
	    auto category = loader->getPluginCategory(key);
            PluginStaticData psd =
                PluginStaticData::fromPlugin(key, category, p);
            psd.staticOutputInfo = StaticOutputRdf().loadStaticOutputInfo(key);
	    response.available.push_back(psd);
	    delete p;
	}

	return response;
    }

    LoadResponse
    loadPlugin(LoadRequest req) {

	auto loader = Vamp::HostExt::PluginLoader::getInstance();
	
	Vamp::Plugin *plugin = loader->loadPlugin(req.pluginKey,
						  req.inputSampleRate,
						  req.adapterFlags);

	LoadResponse response;
	response.plugin = plugin;
	if (!plugin) return response;

	response.plugin = plugin;
	response.staticData = PluginStaticData::fromPlugin
	    (req.pluginKey,
	     loader->getPluginCategory(req.pluginKey),
	     plugin);
        
        response.staticData.staticOutputInfo =
            StaticOutputRdf().loadStaticOutputInfo(req.pluginKey);

	int defaultChannels = 0;
	if (plugin->getMinChannelCount() == plugin->getMaxChannelCount()) {
	    defaultChannels = int(plugin->getMinChannelCount());
	}
	
	response.defaultConfiguration = PluginConfiguration::fromPlugin
	    (plugin,
	     defaultChannels,
	     int(plugin->getPreferredStepSize()),
	     int(plugin->getPreferredBlockSize()));
	
	return response;
    }

    ConfigurationResponse
    configurePlugin(ConfigurationRequest req) {
	
	for (PluginConfiguration::ParameterMap::const_iterator i =
		 req.configuration.parameterValues.begin();
	     i != req.configuration.parameterValues.end(); ++i) {
	    req.plugin->setParameter(i->first, i->second);
	}

	if (req.configuration.currentProgram != "") {
	    req.plugin->selectProgram(req.configuration.currentProgram);
	}

	ConfigurationResponse response;

	response.plugin = req.plugin;

        if (req.configuration.framing.stepSize == 0 ||
            req.configuration.framing.blockSize == 0) {
            return response;
        }

        Framing pluginPreferredFraming;
        pluginPreferredFraming.stepSize = req.plugin->getPreferredStepSize();
        pluginPreferredFraming.blockSize = req.plugin->getPreferredBlockSize();
        
	if (req.plugin->initialise(req.configuration.channelCount,
				   req.configuration.framing.stepSize,
				   req.configuration.framing.blockSize)) {

	    response.outputs = req.plugin->getOutputDescriptors();

            // If the Vamp plugin initialise() call succeeds, then by
            // definition it is accepting the step and block size
            // passed in
            response.framing = req.configuration.framing;

	} else {
           
            // If initialise() fails, one reason could be that it
            // didn't like the passed-in framing (step and block
            // size).
            // 
            // Vamp and Piper have quite different mechanisms for
            // negotiating step and block size:
            //
            // - If a Vamp plugin doesn't like the step and block size
            // passed to initialise(), it fails the initialise() call,
            // returning false from it. The host is expected to have
            // called getPreferredStepSize()/BlockSize() after it made
            // any parameter changes that might have affected these
            // preferences (but before calling initialise).
            //
            // - If a Piper server doesn't like the step and block
            // size passed in a configure request, but if everything
            // else about the configure request is OK, then it returns
            // a successful configure response including its preferred
            // step and block sizes in the response (which the host
            // must then use). The important thing to note is that
            // this is still a successful response, something we do
            // not yet have here.
            //
            // We need to check whether the passed-in framing differs
            // from the plugin's preferences; if so, then we form a
            // working supposition that initialise() failed because of
            // this. Vamp contains nothing to allow us to test this,
            // except to try initialise() again with different
            // values. So we try again with the values the plugin told
            // us it would prefer and, if that succeeds, return them
            // in a successful response in the Piper manner.
            //
            // Note that if the "other side" (i.e. the client) wants
            // to interpret this as if it were dealing with a Vamp
            // plugin, then it's going to need some equal-but-opposite
            // acrobatics.

            if (req.plugin->initialise(req.configuration.channelCount,
                                       pluginPreferredFraming.stepSize,
                                       pluginPreferredFraming.blockSize)) {

                response.outputs = req.plugin->getOutputDescriptors();
                response.framing = pluginPreferredFraming;

            } // ... else we return no outputs, which is the error
              // case (presumably to be converted to Piper error
              // response).
        }

	return response;
    }
};

}

#endif
