/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Piper C++

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

#ifndef PIPER_PLUGIN_STATIC_DATA_H
#define PIPER_PLUGIN_STATIC_DATA_H

#include <vamp-hostsdk/Plugin.h>

#include "StaticOutputDescriptor.h"

namespace piper_vamp {

/**
 * \class PluginStaticData
 * 
 * PluginStaticData is a structure bundling together all the
 * information about a plugin that cannot be changed by the plugin
 * after it is loaded. That is, everything that does not depend on a
 * parameter or initialisation setting.
 *
 * All of the information in here can be queried from other sources
 * directly (notably the Vamp::Plugin class itself); this structure
 * just pulls it together in one place and provides something that can
 * be stored and recalled without having a Vamp::Plugin object to
 * hand.
 */
struct PluginStaticData
{
public:
    struct Basic {
	std::string identifier;
	std::string name;
	std::string description;
    };
    typedef std::vector<Basic> BasicList;
    
    PluginStaticData() : // invalid static data by default
	pluginVersion(0), minChannelCount(0), maxChannelCount(0),
	inputDomain(Vamp::Plugin::TimeDomain) { }

    std::string pluginKey;
    Basic basic;
    std::string maker;
    std::string copyright;
    int pluginVersion;
    std::vector<std::string> category; // not found in the plugin, may
                                       // come from accompanying
                                       // metadata
    size_t minChannelCount;
    size_t maxChannelCount;
    Vamp::PluginBase::ParameterList parameters;
    Vamp::PluginBase::ProgramList programs;
    Vamp::Plugin::InputDomain inputDomain;
    BasicList basicOutputInfo;
    StaticOutputInfo staticOutputInfo; // not found in the plugin, may
                                       // come from accompanying
                                       // (RDF?) metadata

    static PluginStaticData
    fromPlugin(std::string pluginKey,
	       std::vector<std::string> category,
	       Vamp::Plugin *p) {

	PluginStaticData d;
	d.pluginKey = pluginKey;
	d.basic.identifier = p->getIdentifier();
	d.basic.name = p->getName();
	d.basic.description = p->getDescription();
	d.maker = p->getMaker();
	d.copyright = p->getCopyright();
	d.pluginVersion = p->getPluginVersion();
	d.category = category;
	d.minChannelCount = p->getMinChannelCount();
	d.maxChannelCount = p->getMaxChannelCount();
	d.parameters = p->getParameterDescriptors();
	d.programs = p->getPrograms();
	d.inputDomain = p->getInputDomain();

	Vamp::Plugin::OutputList outputs = p->getOutputDescriptors();
	for (Vamp::Plugin::OutputList::const_iterator i = outputs.begin();
	     i != outputs.end(); ++i) {
	    Basic b;
	    b.identifier = i->identifier;
	    b.name = i->name;
	    b.description = i->description;
	    d.basicOutputInfo.push_back(b);
	}

	return d;
    }
};

}

#endif
