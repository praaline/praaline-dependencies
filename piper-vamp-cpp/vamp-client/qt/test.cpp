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

#include "ProcessQtTransport.h"
#include "CapnpRRClient.h"
#include "PiperAutoPlugin.h"

#include <vamp-hostsdk/PluginInputDomainAdapter.h>

#include <stdexcept>

using std::cerr;
using std::endl;
using std::exception;
using std::vector;
using std::string;

int main(int argc, char **argv)
{
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <server-executable-path>" << endl;
        return 2;
    }

    string server = argv[1];
    string format = "capnp";
    string zeroCrossing = "vamp-example-plugins:zerocrossing";
    string powerSpectrum = "vamp-example-plugins:powerspectrum";
    piper_vamp::client::LogCallback *logger = nullptr;
    
    try {
        cerr << endl << "*** Test: starting transport" << endl;
        piper_vamp::client::ProcessQtTransport transport(server, format, logger);
        if (!transport.isOK()) {
            cerr << "--- ERROR: Transport failed to start" << endl;
            return 1;
        }
        cerr << "+++ OK" << endl;

        cerr << endl << "*** Test: constructing client" << endl;
        piper_vamp::client::CapnpRRClient client(&transport, logger);
        cerr << "+++ OK" << endl;

        cerr << endl << "*** Test: listing plugins" << endl;
        piper_vamp::ListResponse lr = client.list({});
        cerr << "+++ OK; plugins are:" << endl;
        int i = 1;
        for (const auto &p: lr.available) {
            cerr << i++ << ". [" << p.pluginKey << "] " << p.basic.name << endl;
        }

        enum {
            explicitServer = 1,
            autoServer = 2
        };
        enum {
            timeDomain = 1,
            frequencyDomainServerSide = 2,
            frequencyDomainClientSide = 3
        };

        for (int domain = timeDomain;
             domain <= frequencyDomainClientSide;
             ++domain) {

            for (int serverSort = explicitServer;
                 serverSort <= autoServer;
                 ++serverSort) {

                string id = zeroCrossing;
                if (domain == frequencyDomainServerSide ||
                    domain == frequencyDomainClientSide) {
                    id = powerSpectrum;
                }
            
                Vamp::Plugin *plugin = nullptr;

                int adapterFlags = 0;
                if (domain == frequencyDomainServerSide) {
                    adapterFlags = (int)
                        Vamp::HostExt::PluginLoader::ADAPT_INPUT_DOMAIN;
                }

                if (serverSort == explicitServer) {
            
                    cerr << endl << "*** Test: loading \"" << id
                         << "\" with explicit server" << endl;
                    
                    piper_vamp::LoadRequest req;
                    req.pluginKey = id;
                    req.inputSampleRate = 16;
                    req.adapterFlags = adapterFlags;
                    piper_vamp::LoadResponse resp = client.load(req);
                    plugin = resp.plugin;
                    if (!plugin) {
                        cerr << "--- ERROR: plugin is null" << endl;
                        return 1;
                    }
                    cerr << "+++ OK" << endl;

                } else {
                
                    cerr << endl << "*** Test: loading \"" << id
                         << "\" with auto-plugin" << endl;
                    
                    piper_vamp::client::PiperAutoPlugin *ap =
                        new piper_vamp::client::PiperAutoPlugin
                        (server, id, 16, adapterFlags, logger);
                    if (!ap->isOK()) {
                        cerr << "--- ERROR: PiperAutoPlugin creation failed" << endl;
                        return 1;
                    }
                    cerr << "+++ OK" << endl;

                    plugin = ap;
                }

                if (domain == frequencyDomainClientSide) {
                    cerr << "*** Test: creating input-domain adapter" << endl;
                    plugin = new Vamp::HostExt::PluginInputDomainAdapter(plugin);
                    cerr << "+++ OK" << endl;
                }

                cerr << endl << "*** Test: initialising plugin" << endl;
                if (!plugin->initialise(1, 4, 4)) {
                    cerr << "--- ERROR: initialisation failed" << endl;
                    return 1;
                }
                cerr << "+++ OK" << endl;

                for (int round = 1; round <= 2; ++round) {
                    cerr << endl << "*** Test: processing"
                         << " (domain " << domain
                         << ", sort " << serverSort
                         << ", round " << round << ")" << endl;

                    vector<float> buf = { 1.0, -1.0, 1.0, -1.0 };
                    float *bd = buf.data();
                    Vamp::Plugin::FeatureSet features = plugin->process
                        (&bd, Vamp::RealTime::zeroTime);
                    cerr << "+++ OK, process succeeded" << endl;
                    if (features[0].size() != 1) {
                        cerr << "--- ERROR: wrong number of features on output 0"
                             << " (expected 1, obtained " << features[0].size() << ")"
                             << endl;
                        return 1;
                    }
                    vector<float> expected;
                    if (domain == timeDomain) {
                        expected.push_back(4);
                    } else {
                        // these would be 0, 0, 16 if we were
                        // calculating the power spectrum without
                        // windowing - but the input domain adapter
                        // does window, and an asymmetrical Hann
                        // window gives these results
                        expected.push_back(0);
                        expected.push_back(1);
                        expected.push_back(4);
                    }
                    
                    if (features[0][0].values.size() != expected.size()) {
                        cerr << "--- ERROR: wrong size for feature on output 0"
                             << " (expected " << expected.size()
                             << ", obtained "
                             << features[0][0].values.size() << ")" << endl;
                        return 1;
                    }
                    for (size_t i = 0; i < expected.size(); ++i) {
                        if (features[0][0].values[i] != expected[i]) {
                            cerr << "--- ERROR: wrong value for index " << i
                                 << " of feature on output 0"
                                 << " (expected " << expected[i]
                                 << ", obtained "
                                 << features[0][0].values[i] << ")" << endl;
                            cerr << "(All obtained values are:";
                            for (size_t j = 0; j < expected.size(); ++j) {
                                cerr << " " << features[0][0].values[j];
                            }
                            cerr << ")" << endl;
                            return 1;
                        }
                    }
                    cerr << "+++ OK, results are correct" << endl;

                    (void)plugin->getRemainingFeatures();

                    if (round == 1) {
                        cerr << endl << "*** Test: resetting plugin for round 2" << endl;
                        plugin->reset();
                        cerr << "+++ OK" << endl;
                    }
                }

                cerr << endl << "*** Test: deleting plugin" << endl;
                delete plugin;
                cerr << "+++ OK" << endl;
            }
        }

    } catch (const exception &e) {
        cerr << "--- ERROR: Exception caught: " << e.what() << endl;
        return 1;
    }

    cerr << endl << "*** All tests succeeded" << endl;
        
    return 0;
}

