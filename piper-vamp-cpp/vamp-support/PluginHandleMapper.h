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

#ifndef PIPER_PLUGIN_HANDLE_MAPPER_H
#define PIPER_PLUGIN_HANDLE_MAPPER_H

#include "PluginOutputIdMapper.h"

#include <vamp-hostsdk/Plugin.h>
#include <memory>

namespace piper_vamp {

/**
 * Convert plugin pointers to handles within some scope defined by the
 * individual PluginHandleMapper implementation.
 *
 * The special handle 0 and the NULL plugin pointer are both used to
 * represent "not found" and will be returned in any case where an
 * unknown handle or plugin is requested.
 *
 * Note that the handle type must be representable as a JSON number,
 * hence the use of a 32-bit rather than 64-bit int.
 *
 * This interface also includes methods for obtaining a
 * PluginOutputIdMapper, \see PluginOutputIdMapper.
 */

class PluginHandleMapper
{
public:
    /**
     * The handle type. This is 32-bit rather than 64-bit in order to
     * be representable as a JSON number without rounding, and is
     * unsigned to avoid C++ undefined behaviour in places where it
     * could wrap around.
     */
    typedef uint32_t Handle;
    
    const Handle INVALID_HANDLE = 0;

    virtual ~PluginHandleMapper() noexcept { }

    /**
     * Look up and return the handle for a given plugin pointer.
     * If the given pointer is null or not known, return INVALID_HANDLE.
     */
    virtual Handle pluginToHandle(Vamp::Plugin *) const noexcept = 0;

    /**
     * Look up and return the plugin for a given handle.
     * If the given handle is INVALID_HANDLE or not known, return nullptr.
     */
    virtual Vamp::Plugin *handleToPlugin(Handle) const noexcept = 0;

    /**
     * Return a shared pointer to a PluginOutputIdMapper
     * implementation for the given plugin pointer.  If the given
     * pointer is null or not known, return the null shared_ptr.
     */
    virtual const std::shared_ptr<PluginOutputIdMapper> pluginToOutputIdMapper
    (Vamp::Plugin *p) const noexcept = 0;

    /**
     * Return a shared pointer to a PluginOutputIdMapper
     * implementation for the given plugin handle.  If the given
     * handle is INVALID_HANDLE or not known, return the null shared_ptr.
     */
    virtual const std::shared_ptr<PluginOutputIdMapper> handleToOutputIdMapper
    (Handle h) const noexcept = 0;
};

}

#endif

