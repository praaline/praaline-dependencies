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

#ifndef PIPER_PLUGIN_CLIENT_H
#define PIPER_PLUGIN_CLIENT_H

#include "vamp-support/PluginConfiguration.h"

namespace piper_vamp {
namespace client {

class PiperVampPlugin;

/**
 * Interface for a client that accepts Vamp-like structures (Plugin
 * and the classes in vamp-support) and communicates with a Piper
 * server, using some serialisation and transport defined by the
 * specific implementation.
 */
class PluginClient
{
public:
    virtual
    ConfigurationResponse
    configure(PiperVampPlugin *plugin,
              PluginConfiguration config) = 0;
    
    virtual
    Vamp::Plugin::FeatureSet
    process(PiperVampPlugin *plugin,
            std::vector<std::vector<float> > inputBuffers,
            Vamp::RealTime timestamp) = 0;

    virtual
    Vamp::Plugin::FeatureSet
    finish(PiperVampPlugin *plugin) = 0;

    virtual
    void
    reset(PiperVampPlugin *plugin,
          PluginConfiguration config) = 0;
};

}
}

#endif
