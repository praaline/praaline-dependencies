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

#ifndef PIPER_COUNTING_PLUGIN_HANDLE_MAPPER_H
#define PIPER_COUNTING_PLUGIN_HANDLE_MAPPER_H

#include "PluginHandleMapper.h"
#include "PluginOutputIdMapper.h"
#include "AssignedPluginHandleMapper.h"

#include <set>
#include <map>

namespace piper_vamp {

class CountingPluginHandleMapper : public PluginHandleMapper
{
public:
    CountingPluginHandleMapper() : m_nextHandle(1) { }

    void addPlugin(Vamp::Plugin *p) {
        Handle h = m_nextHandle++;
        m_sub.addPlugin(h, p);
    }

    void removePlugin(Handle h) {
        m_sub.removePlugin(h);
    }
    
    Handle pluginToHandle(Vamp::Plugin *p) const noexcept override {
        return m_sub.pluginToHandle(p);
    }
    
    Vamp::Plugin *handleToPlugin(Handle h) const noexcept override {
        return m_sub.handleToPlugin(h);
    }

    const std::shared_ptr<PluginOutputIdMapper> pluginToOutputIdMapper
    (Vamp::Plugin *p) const noexcept override {
        return m_sub.pluginToOutputIdMapper(p);
    }

    const std::shared_ptr<PluginOutputIdMapper> handleToOutputIdMapper
    (Handle h) const noexcept override {
        return m_sub.handleToOutputIdMapper(h);
    }

    bool isConfigured(Handle h) const noexcept {
        return m_sub.isConfigured(h);
    }

    void markConfigured(Handle h, int channelCount, int blockSize) {
        m_sub.markConfigured(h, channelCount, blockSize);
    }

    int getChannelCount(Handle h) const noexcept {
        return m_sub.getChannelCount(h);
    }

    int getBlockSize(Handle h) const noexcept {
        return m_sub.getBlockSize(h);
    }
    
private:
    Handle m_nextHandle; // NB plugin handle type must fit in JSON number
    AssignedPluginHandleMapper m_sub;
};

}

#endif
