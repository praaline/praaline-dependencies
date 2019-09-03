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

#ifndef PIPER_PRESERVING_PLUGIN_HANDLE_MAPPER_H
#define PIPER_PRESERVING_PLUGIN_HANDLE_MAPPER_H

#include "PluginHandleMapper.h"
#include "PreservingPluginOutputIdMapper.h"

#include <iostream>

namespace piper_vamp {

/**
 * A PluginHandleMapper that accepts a handle in the handleToPlugin
 * method, storing it for later, and returns the same handle from
 * pluginToHandle when given the same plugin pointer as it had earlier
 * returned from handleToPlugin. It can only remember one handle, and
 * knows nothing about actual plugins - the plugin pointer it returns
 * is nominal and must never be dereferenced.
 */
class PreservingPluginHandleMapper : public PluginHandleMapper
{
    class NotAPlugin : public Vamp::Plugin
    {
        #define STR(x) std::string get##x() const override { return "not-a-plugin"; }
    public:
        STR(Identifier) STR(Name) STR(Description) STR(Maker) STR(Copyright)
        int getPluginVersion() const override { return 1; }
        bool initialise(size_t, size_t, size_t) override { return false; }
        void reset() override { }
        InputDomain getInputDomain() const override { return TimeDomain; }
        OutputList getOutputDescriptors() const override { return {}; }
        FeatureSet process(const float *const *, Vamp::RealTime) override { return {}; }
        FeatureSet getRemainingFeatures() override { return {}; }
        NotAPlugin() : Plugin(1) { }
    };
    
public:
    PreservingPluginHandleMapper() :
        m_handle(INVALID_HANDLE),
        m_plugin(nullptr),
        m_omapper(std::make_shared<PreservingPluginOutputIdMapper>()) { }

    virtual ~PreservingPluginHandleMapper() {
        delete m_plugin;
    }

    Handle pluginToHandle(Vamp::Plugin *p) const noexcept override {
        if (!p) return INVALID_HANDLE;
	if (p == m_plugin) return m_handle;
	else {
	    std::cerr << "PreservingPluginHandleMapper: p = " << p
		      << " differs from saved m_plugin " << m_plugin
		      << " (not returning saved handle " << m_handle << ")"
		      << std::endl;
            return INVALID_HANDLE;
	}
    }

    Vamp::Plugin *handleToPlugin(Handle h) const noexcept override {
        if (h == INVALID_HANDLE) return nullptr;
        if (h == m_handle) return m_plugin;
        if (m_handle != INVALID_HANDLE) {
            std::cerr << "PreservingPluginHandleMapper: m_handle " << m_handle
                      << " is non-null when a new handle (" << h
                      << ") is provided, but "
                      << "this stupid stub class can only handle one handle"
                      << std::endl;
            return nullptr;
        }
	m_handle = h;
        // We allocate something here, just so that we can
        // sanity-check in the pluginToHandle call that the thing
        // passed in is likely to be the pointer we returned from
        // handleToPlugin earlier. Allocating an actual plugin allows
        // us to return it without running afoul of strict-aliasing
        // rules or the C++ object memory model.
        m_plugin = new NotAPlugin();
        return m_plugin;
    }

    const std::shared_ptr<PluginOutputIdMapper> pluginToOutputIdMapper
    (Vamp::Plugin *p) const noexcept override {
        if (!p) return {};
        return m_omapper;
    }
        
    const std::shared_ptr<PluginOutputIdMapper> handleToOutputIdMapper
    (Handle h) const noexcept override {
        if (h == INVALID_HANDLE) return {};
        return m_omapper;
    }
    
private:
    mutable Handle m_handle;
    mutable NotAPlugin *m_plugin;
    std::shared_ptr<PreservingPluginOutputIdMapper> m_omapper;
};

}

#endif
