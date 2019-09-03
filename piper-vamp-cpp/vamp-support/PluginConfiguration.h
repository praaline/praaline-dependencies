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

#ifndef PIPER_PLUGIN_CONFIGURATION_H
#define PIPER_PLUGIN_CONFIGURATION_H

#include <vamp-hostsdk/Plugin.h>

#include <map>
#include <string>

namespace piper_vamp {

/**
 * \struct Framing
 * 
 * A structure bundling the processing step and block size.
 */
struct Framing
{
    Framing() : // invalid by default 
        stepSize(0), blockSize(0) { }
    
    int stepSize;
    int blockSize;
};

/**
 * \class PluginConfiguration
 * 
 * PluginConfiguration is a structure bundling together data that
 * affect the configuration of a plugin: parameter values, programs,
 * and initialisation settings. Although an interactive Vamp plugin
 * host may configure a plugin in stages, for example to take into
 * account that a plugin's preferred step and block size may change
 * when its parameters are changed, a batch host or a host supporting
 * store and recall of configurations may wish to keep all
 * configuration settings together.
 */
struct PluginConfiguration
{
    PluginConfiguration() : // invalid configuration by default
	channelCount(0) { }
	
    int channelCount;
    Framing framing;
    typedef std::map<std::string, float> ParameterMap;
    ParameterMap parameterValues;
    std::string currentProgram;

    /**
     * Extract the configuration from the given plugin (without
     * retaining any persistent reference to the plugin itself).
     */
    static PluginConfiguration
    fromPlugin(Vamp::Plugin *p,
	       int channelCount,
	       int stepSize,
	       int blockSize) {
	
	PluginConfiguration c;
	
	c.channelCount = channelCount;
	c.framing.stepSize = stepSize;
	c.framing.blockSize = blockSize;

	Vamp::PluginBase::ParameterList params = p->getParameterDescriptors();
	for (Vamp::PluginBase::ParameterList::const_iterator i = params.begin();
	     i != params.end(); ++i) {
	    std::string pid = i->identifier;
	    c.parameterValues[pid] = p->getParameter(pid);
	}
	
	if (!p->getPrograms().empty()) {
	    c.currentProgram = p->getCurrentProgram();
	}

	return c;
    }
};

}

#endif
