/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Piper C++

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

#ifndef PIPER_ASSIGNED_PLUGIN_HANDLE_MAPPER_H
#define PIPER_ASSIGNED_PLUGIN_HANDLE_MAPPER_H

#include "PluginHandleMapper.h"
#include "PluginOutputIdMapper.h"
#include "DefaultPluginOutputIdMapper.h"

#include <set>
#include <map>
#include <iostream>

namespace piper_vamp {

class AssignedPluginHandleMapper : public PluginHandleMapper
{
public:
    AssignedPluginHandleMapper() { }

    void addPlugin(Handle h, Vamp::Plugin *p) {
        if (!p) return;
	if (m_rplugins.find(p) == m_rplugins.end()) {
            if (m_plugins.find(h) != m_plugins.end()) {
                std::cerr << "ERROR: Duplicate plugin handle " << h
                          << " for plugin " << p << " (already used for plugin "
                          << m_plugins[h] << ")" << std::endl;
                throw std::logic_error("Duplicate plugin handle");
            }
	    m_plugins[h] = p;
	    m_rplugins[p] = h;
            m_outputMappers[h] =
                std::make_shared<DefaultPluginOutputIdMapper>(p);
	}
    }

    void removePlugin(Handle h) {
	if (m_plugins.find(h) == m_plugins.end()) return;
	Vamp::Plugin *p = m_plugins[h];
        m_outputMappers.erase(h);
	m_plugins.erase(h);
	if (isConfigured(h)) {
	    m_configuredPlugins.erase(h);
	    m_channelCounts.erase(h);
	}
	m_rplugins.erase(p);
    }

    bool havePlugin(Vamp::Plugin *p) {
        return (m_rplugins.find(p) != m_rplugins.end());
    }
    
    Handle pluginToHandle(Vamp::Plugin *p) const noexcept override {
	if (m_rplugins.find(p) == m_rplugins.end()) {
            return INVALID_HANDLE;
	}
	return m_rplugins.at(p);
    }
    
    Vamp::Plugin *handleToPlugin(Handle h) const noexcept override {
	if (m_plugins.find(h) == m_plugins.end()) {
            return nullptr;
	}
	return m_plugins.at(h);
    }

    const std::shared_ptr<PluginOutputIdMapper> pluginToOutputIdMapper
    (Vamp::Plugin *p) const noexcept override {
        return handleToOutputIdMapper(pluginToHandle(p));
    }

    const std::shared_ptr<PluginOutputIdMapper> handleToOutputIdMapper
    (Handle h) const noexcept override {
	if (h != INVALID_HANDLE &&
            m_outputMappers.find(h) != m_outputMappers.end()) {
            return m_outputMappers.at(h);
        } else {
	    return {};
	}
    }

    bool isConfigured(Handle h) const noexcept {
        if (h == INVALID_HANDLE) return false;
	return m_configuredPlugins.find(h) != m_configuredPlugins.end();
    }

    void markConfigured(Handle h, int channelCount, int blockSize) {
        if (h == INVALID_HANDLE) return;
	m_configuredPlugins.insert(h);
	m_channelCounts[h] = channelCount;
	m_blockSizes[h] = blockSize;
    }

    int getChannelCount(Handle h) const noexcept {
	if (m_channelCounts.find(h) == m_channelCounts.end()) {
	    return 0;
	}
	return m_channelCounts.at(h);
    }

    int getBlockSize(Handle h) const noexcept {
	if (m_blockSizes.find(h) == m_blockSizes.end()) {
            return 0;
	}
	return m_blockSizes.at(h);
    }
    
private:
    std::map<Handle, Vamp::Plugin *> m_plugins;
    std::map<Vamp::Plugin *, Handle> m_rplugins;
    std::set<Handle> m_configuredPlugins;
    std::map<Handle, int> m_channelCounts;
    std::map<Handle, int> m_blockSizes;
    std::map<Handle, std::shared_ptr<PluginOutputIdMapper>> m_outputMappers;
};

}

#endif
