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

#ifndef PIPER_SYNCHRONOUS_TRANSPORT_H
#define PIPER_SYNCHRONOUS_TRANSPORT_H

#include <vector>
#include <cstdlib>
#include <stdexcept>

namespace piper_vamp {
namespace client {

class MessageCompletenessChecker // interface
{
public:
    enum State { Complete, Incomplete, Invalid };

    virtual ~MessageCompletenessChecker() = default;
    virtual State check(const std::vector<char> &message) const = 0;
};

class LogCallback
{
public:
    virtual ~LogCallback() { }

    /**
     * Log a message. The logger should terminate the message
     * appropriately after logging; the caller is not expected to end
     * it with \n or similar.
     */
    virtual void log(std::string) const = 0;
};

class SynchronousTransport // interface
{
public:
    virtual ~SynchronousTransport() = default;
    
    /**
     * Set a completeness checker object. The caller retains ownership
     * of the checker and must ensure its lifespan outlives the transport.
     */
    virtual void setCompletenessChecker(MessageCompletenessChecker *) = 0;

    /**
     * Make a synchronous call, passing a serialised request in the data array
     * of length bytes, and return the result.
     *
     * The type field is only used for logging and debug output.
     *
     * The slow flag is a hint that the recipient may take longer than usual
     * to process this request and so the caller may wish to be more relaxed
     * about idling to wait for the reply. (This shouldn't make any difference
     * with a sensible blocking network API, but you never know...)
     *
     * May throw ServerCrashed if the server endpoint disappeared during the
     * call. Throws std::logic_error if isOK() is not true at the time of
     * calling, so check that before you call.
     */
    virtual std::vector<char> call(const char *data, size_t bytes,
                                   std::string type, bool slow) = 0;

    /**
     * Check whether the transport was initialised correctly and is working.
     * This will return false if the endpoint could not be initialised or
     * the endpoint service has crashed or become unavailable. Always check
     * this before using call().
     */
    virtual bool isOK() const = 0;
};

}
}

#endif
