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

#ifndef PIPER_PLUGIN_ID_MAPPER_H
#define PIPER_PLUGIN_ID_MAPPER_H

#include <vamp-hostsdk/Plugin.h>

#include <map>
#include <string>

namespace piper_vamp {

/**
 * Interface for an object that maps between a plugin's output id (a
 * string) and output index (index of the output in the output list).
 */
class PluginOutputIdMapper
{
public:
    virtual ~PluginOutputIdMapper() { }

    /**
     * Return the index of the given output id in the plugin. The
     * first output has index 0. If the given output id is unknown,
     * return -1.
     */
    virtual int idToIndex(std::string outputId) const noexcept = 0;

    /**
     * Return the id of the output with the given index in the
     * plugin. If the index is out of range, return the empty string.
     */
    virtual std::string indexToId(int index) const noexcept = 0;
};

}

#endif
