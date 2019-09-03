/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Piper C++

    An API for audio analysis and feature extraction plugins.

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

#ifndef PIPER_STATIC_OUTPUT_RDF_H
#define PIPER_STATIC_OUTPUT_RDF_H

#include "StaticOutputDescriptor.h"

#include <vamp-hostsdk/PluginLoader.h>

#include <sord/sord.h>

#include <mutex>

namespace piper_vamp {

//!!! todo: better (+ optional) error reporting; check whether file
//!!! exists before parsing it to avoid spurious error messages;
//!!! refactoring

class StaticOutputRdf
{
public:
    StaticOutputRdf() :
        m_world(sord_world_new())
    {}

    ~StaticOutputRdf() {
        sord_world_free(m_world);
    }
    
    StaticOutputInfo loadStaticOutputInfo(Vamp::HostExt::PluginLoader::PluginKey
                                          pluginKey) {

        StaticOutputInfo info;
        SordModel *model = sord_new(m_world, SORD_SPO|SORD_OPS|SORD_POS, false);
        if (loadRdf(model, candidateRdfFilesFor(pluginKey))) {
            loadStaticOutputInfoFromModel(model, pluginKey, info);
        }
        sord_free(model);
        return info;
    }

private:
    SordWorld *m_world;

    bool loadRdf(SordModel *targetModel, std::vector<std::string> filenames) {
        for (auto f: filenames) {
            if (loadRdfFile(targetModel, f)) {
                return true;
            }
        }
        return false;
    }

    bool loadRdfFile(SordModel *targetModel, std::string filename) {
        std::string base = "file://" + filename;
        SerdURI bu;
        if (serd_uri_parse((const uint8_t *)base.c_str(), &bu) !=
            SERD_SUCCESS) {
            std::cerr << "Failed to parse base URI " << base << std::endl;
            return false;
        }
        SerdNode bn = serd_node_from_string(SERD_URI,
                                            (const uint8_t *)base.c_str());
        SerdEnv *env = serd_env_new(&bn);
        SerdReader *reader = sord_new_reader(targetModel, env, SERD_TURTLE, 0);
        SerdStatus rv = serd_reader_read_file
            (reader, (const uint8_t *)filename.c_str());
        bool success = (rv == SERD_SUCCESS);
        if (!success) {
            // We are asking Serd to parse the file without having
            // checked whether it actually exists or not (in order to
            // avoid duplicating ugly platform/encoding-specific stuff
            // in this file). So don't bleat if the file is simply not
            // found, but only if there's a real parse error
            if (rv != SERD_ERR_NOT_FOUND &&
                rv != SERD_ERR_UNKNOWN) {
                std::cerr << "Failed to import RDF from " << filename
                          << ": " << serd_strerror(rv) << std::endl;
            }
        }
        serd_reader_free(reader);
        serd_env_free(env);
        return success;
    }
    
    std::vector<std::string> candidateRdfFilesFor(Vamp::HostExt::
                                                  PluginLoader::PluginKey key) {

        std::string library = Vamp::HostExt::PluginLoader::getInstance()->
            getLibraryPathForPlugin(key);
	
        auto li = library.rfind('.');
        if (li == std::string::npos) return {};
        auto withoutSuffix = library.substr(0, li);

        std::vector<std::string> suffixes { "n3", "N3", "ttl", "TTL" };
        std::vector<std::string> candidates;

        for (auto suffix : suffixes) {
            candidates.push_back(withoutSuffix + "." + suffix);
        }

        return candidates;
    }

    void
    loadStaticOutputInfoFromModel(SordModel *model,
                                  std::string pluginKey,
                                  StaticOutputInfo &info) {
        
        // we want to find a graph like
        //
        // :plugin a vamp:Plugin
        // :plugin vamp:identifier "pluginId"
        // :library vamp:available_plugin :plugin
        // :library vamp:identifier "libraryId"
        // :plugin vamp:output :output1
        // :plugin vamp:output :output2
        // :plugin vamp:output :output3
        // :output1 vamp:computes_event_type :event
        // :output2 vamp:computes_feature :feature
        // :output3 vamp:computes_signal_type :signal
        //
        // in which pluginKey == libraryId + ":" + pluginId
        
        std::string libraryId, pluginId;
        if (!decomposePluginKey(pluginKey, libraryId, pluginId)) {
            std::cerr << "Failed to decompose plugin key \"" << pluginKey
                      << "\"" << std::endl;
            return;
        }

        typedef const uint8_t *S;
        
        SordNode *a = sord_new_uri
            (m_world, S("http://www.w3.org/1999/02/22-rdf-syntax-ns#type"));

        SordNode *pluginType = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/Plugin"));

        SordNode *identProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/identifier"));
        SordNode *availProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/available_plugin"));
        SordNode *outputProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/output"));

        SordNode *computesEventProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/computes_event_type"));
        SordNode *computesFeatureProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/computes_feature"));
        SordNode *computesSignalProp = sord_new_uri
            (m_world, S("http://purl.org/ontology/vamp/computes_signal_type"));

        SordIter *pluginItr = 0;

        for (pluginItr = sord_search(model, 0, a, pluginType, 0);
             !sord_iter_end(pluginItr);
             sord_iter_next(pluginItr)) {

            const SordNode *pluginNode =
                sord_iter_get_node(pluginItr, SORD_SUBJECT);

            SordNode *pluginIdNode =
                sord_get(model, pluginNode, identProp, 0, 0);

            if (!pluginIdNode ||
                sord_node_get_type(pluginIdNode) != SORD_LITERAL ||
                (const char *)sord_node_get_string(pluginIdNode) != pluginId) {
                // This is a plugin node, but it's not the plugin node
                // we're looking for. (We have to check both the type
                // property, vamp:Plugin, and the identifier,
                // vamp:identifier, because the identifier is just a
                // string and it's possible it could be used for an
                // output or parameter rather than just a plugin.)
                continue;
            }
            
            SordNode *libraryNode =
                sord_get(model, 0, availProp, pluginNode, 0);

            if (!libraryNode) {
                std::cerr << "Plugin is not listed as being in a library, "
                          << "skipping library id check" << std::endl;
            } else {
                SordNode *libIdNode =
                    sord_get(model, libraryNode, identProp, 0, 0);
                if (!libIdNode ||
                    sord_node_get_type(libIdNode) != SORD_LITERAL ||
                    (const char *)sord_node_get_string(libIdNode) != libraryId) {
                    std::cerr << "Ignoring plugin in wrong library" << std::endl;
                    continue;
                }
            }

            SordIter *outputItr = 0;

            for (outputItr = sord_search(model, pluginNode, outputProp, 0, 0);
                 !sord_iter_end(outputItr);
                 sord_iter_next(outputItr)) {

                const SordNode *outputNode =
                    sord_iter_get_node(outputItr, SORD_OBJECT);

                SordNode *outputIdNode =
                    sord_get(model, outputNode, identProp, 0, 0);

                if (!outputIdNode ||
                    sord_node_get_type(outputIdNode) != SORD_LITERAL ||
                    !sord_node_get_string(outputIdNode)) {
                    std::cerr << "Ignoring output with no id" << std::endl;
                    continue;
                }

                std::string outputId =
                    (const char *)sord_node_get_string(outputIdNode);

                SordIter *propItr = 0;

                for (propItr = sord_search(model, outputNode, 0, 0, 0);
                     !sord_iter_end(propItr);
                     sord_iter_next(propItr)) {

                    const SordNode *propNode =
                        sord_iter_get_node(propItr, SORD_PREDICATE);

                    if (sord_node_equals(propNode, computesEventProp) ||
                        sord_node_equals(propNode, computesFeatureProp) ||
                        sord_node_equals(propNode, computesSignalProp)) {

                        const SordNode *computesNode =
                            sord_iter_get_node(propItr, SORD_OBJECT);

                        if (sord_node_get_type(computesNode) != SORD_URI ||
                            !sord_node_get_string(computesNode)) {
                            std::cerr << "Ignoring non-URI computes node"
                                      << std::endl;
                            continue;
                        }

                        std::string typeURI =
                            (const char *)sord_node_get_string(computesNode);

                        std::cerr << "Found type <" << typeURI
                                  << "> for output \"" << outputId
                                  << "\" of plugin \"" << pluginId
                                  << "\" in library " << libraryId
                                  << std::endl;
                        
                        StaticOutputDescriptor desc;
                        desc.typeURI = typeURI;
                        info[outputId] = desc;

                        break; // only interested in one "computes" property
                    }
                }
                        
                sord_iter_free(propItr);
            }

            sord_iter_free(outputItr);
        }
            
        sord_iter_free(pluginItr);
    }

    bool decomposePluginKey(std::string pluginKey,
                            std::string &libraryId,
                            std::string &pluginId) {
        auto i = pluginKey.find(':');
        if (i == std::string::npos || i == 0 || i + 1 == pluginKey.length()) {
            return false;
        }
        libraryId = pluginKey.substr(0, i);
        pluginId = pluginKey.substr(i + 1);
        return true;
    }
};

}

#endif
