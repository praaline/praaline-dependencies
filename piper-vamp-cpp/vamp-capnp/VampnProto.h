/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Piper C++

    Centre for Digital Music, Queen Mary, University of London.
    Copyright 2015-2017 QMUL.
  
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

#include "piper.capnp.h"

#include <capnp/message.h>

#include <vamp-hostsdk/Plugin.h>
#include <vamp-hostsdk/PluginLoader.h>

#include "vamp-support/PluginStaticData.h"
#include "vamp-support/PluginConfiguration.h"
#include "vamp-support/RequestResponse.h"

#include "vamp-support/PluginHandleMapper.h"
#include "vamp-support/PluginOutputIdMapper.h"
#include "vamp-support/RequestResponseType.h"

namespace piper_vamp
{

/**
 * Convert the structures laid out in the Vamp SDK classes into Cap'n
 * Proto structures (and back again).
 * 
 * At least some of this will be necessary for any implementation
 * using Cap'n Proto that uses the C++ Vamp SDK to provide its
 * reference structures. An implementation could alternatively use the
 * Cap'n Proto structures directly, and interact with Vamp plugins
 * using the Vamp C API, without using the C++ Vamp SDK classes at
 * all. That would avoid a lot of copying (in Cap'n Proto style).
 */
class VampnProto
{
public:
    typedef ::capnp::MallocMessageBuilder MsgBuilder;

    template <typename T, typename B>
    static void buildBasicDescriptor(B &basic, const T &t) {
        basic.setIdentifier(t.identifier);
        basic.setName(t.name);
        basic.setDescription(t.description);
    }

    template <typename T, typename B>
    static void readBasicDescriptor(T &t, const B &basic) {
        t.identifier = basic.getIdentifier();
        t.name = basic.getName();
        t.description = basic.getDescription();
    }

    template <typename T, typename M>
    static void buildValueExtents(M &m, const T &t) {
        m.setMinValue(t.minValue);
        m.setMaxValue(t.maxValue);
    }

    template <typename T, typename M>
    static void readValueExtents(T &t, const M &m) {
        t.minValue = m.getMinValue();
        t.maxValue = m.getMaxValue();
    }

    static void buildRealTime(piper::RealTime::Builder &b,
                              const Vamp::RealTime &t) {
        b.setSec(t.sec);
        b.setNsec(t.nsec);
    }

    static void readRealTime(Vamp::RealTime &t,
                             const piper::RealTime::Reader &r) {
        t.sec = r.getSec();
        t.nsec = r.getNsec();
    }

    static piper::SampleType
    fromSampleType(Vamp::Plugin::OutputDescriptor::SampleType t) {
        switch (t) {
        case Vamp::Plugin::OutputDescriptor::OneSamplePerStep:
            return piper::SampleType::ONE_SAMPLE_PER_STEP;
        case Vamp::Plugin::OutputDescriptor::FixedSampleRate:
            return piper::SampleType::FIXED_SAMPLE_RATE;
        case Vamp::Plugin::OutputDescriptor::VariableSampleRate:
            return piper::SampleType::VARIABLE_SAMPLE_RATE;
        }
        throw std::logic_error("unexpected Vamp SampleType enum value");
    }

    static Vamp::Plugin::OutputDescriptor::SampleType
    toSampleType(piper::SampleType t) {
        switch (t) {
        case piper::SampleType::ONE_SAMPLE_PER_STEP:
            return Vamp::Plugin::OutputDescriptor::OneSamplePerStep;
        case piper::SampleType::FIXED_SAMPLE_RATE:
            return Vamp::Plugin::OutputDescriptor::FixedSampleRate;
        case piper::SampleType::VARIABLE_SAMPLE_RATE:
            return Vamp::Plugin::OutputDescriptor::VariableSampleRate;
        }
        throw std::logic_error("unexpected Capnp SampleType enum value");
    }

    static void
    buildStaticOutputDescriptor(piper::StaticOutputDescriptor::Builder &b,
                                const StaticOutputDescriptor &sd) {
        b.setTypeURI(sd.typeURI);
    }
    
    static void
    buildConfiguredOutputDescriptor(piper::ConfiguredOutputDescriptor::Builder &b,
                                    const Vamp::Plugin::OutputDescriptor &od) {

        b.setUnit(od.unit);
        b.setSampleType(fromSampleType(od.sampleType));
        b.setSampleRate(od.sampleRate);
        b.setHasDuration(od.hasDuration);

        b.setHasFixedBinCount(od.hasFixedBinCount);
        if (od.hasFixedBinCount) {
            b.setBinCount(int(od.binCount));
            if (od.binNames.size() > 0) {
                auto binNames = b.initBinNames(unsigned(od.binNames.size()));
                for (int i = 0; i < int(od.binNames.size()); ++i) {
                    binNames.set(i, od.binNames[i]);
                }
            }
        }

        b.setHasKnownExtents(od.hasKnownExtents);
        if (od.hasKnownExtents) {
            buildValueExtents(b, od);
        }

        b.setIsQuantized(od.isQuantized);
        if (od.isQuantized) {
            b.setQuantizeStep(od.quantizeStep);
        }
    }

    static void
    buildOutputDescriptor(piper::OutputDescriptor::Builder &b,
                          const Vamp::Plugin::OutputDescriptor &od,
                          const StaticOutputDescriptor &sd) {

        auto basic = b.initBasic();
        buildBasicDescriptor(basic, od);

        auto configured = b.initConfigured();
        buildConfiguredOutputDescriptor(configured, od);

        auto statc = b.initStatic();
        buildStaticOutputDescriptor(statc, sd);
    }

    static void
    readStaticOutputDescriptor(StaticOutputDescriptor &sd,
                               const piper::StaticOutputDescriptor::Reader &r) {
        sd.typeURI = r.getTypeURI();
    }
    
    static void
    readConfiguredOutputDescriptor(Vamp::Plugin::OutputDescriptor &od,
                                   const piper::ConfiguredOutputDescriptor::Reader &r) {

        od.unit = r.getUnit();

        od.sampleType = toSampleType(r.getSampleType());
        od.sampleRate = r.getSampleRate();
        od.hasDuration = r.getHasDuration();

        od.hasFixedBinCount = r.getHasFixedBinCount();
        if (od.hasFixedBinCount) {
            od.binCount = r.getBinCount();
            od.binNames.clear();
            auto nn = r.getBinNames();
            for (const auto &n: nn) {
                od.binNames.push_back(n);
            }
        }

        od.hasKnownExtents = r.getHasKnownExtents();
        if (od.hasKnownExtents) {
            readValueExtents(od, r);
        }

        od.isQuantized = r.getIsQuantized();
        if (od.isQuantized) {
            od.quantizeStep = r.getQuantizeStep();
        }
    }

    static void
    readOutputDescriptor(Vamp::Plugin::OutputDescriptor &od,
                         StaticOutputDescriptor &sd,
                         const piper::OutputDescriptor::Reader &r) {

        readBasicDescriptor(od, r.getBasic());
        readStaticOutputDescriptor(sd, r.getStatic());
        readConfiguredOutputDescriptor(od, r.getConfigured());
    }

    static void
    buildParameterDescriptor(piper::ParameterDescriptor::Builder &b,
                             const Vamp::Plugin::ParameterDescriptor &pd) {

        auto basic = b.initBasic();
        buildBasicDescriptor(basic, pd);

        b.setUnit(pd.unit);

        buildValueExtents(b, pd);

        b.setDefaultValue(pd.defaultValue);

        b.setIsQuantized(pd.isQuantized);
        if (pd.isQuantized) {
            b.setQuantizeStep(pd.quantizeStep);
        }
        
        if (pd.valueNames.size() > 0) {
            auto valueNames = b.initValueNames(unsigned(pd.valueNames.size()));
            for (int i = 0; i < int(pd.valueNames.size()); ++i) {
                valueNames.set(i, pd.valueNames[i]);
            }
        }
    }

    static void
    readParameterDescriptor(Vamp::Plugin::ParameterDescriptor &pd,
                            const piper::ParameterDescriptor::Reader &r) {

        readBasicDescriptor(pd, r.getBasic());

        pd.unit = r.getUnit();

        readValueExtents(pd, r);

        pd.defaultValue = r.getDefaultValue();

        pd.isQuantized = r.getIsQuantized();
        if (pd.isQuantized) {
            pd.quantizeStep = r.getQuantizeStep();
        }

        pd.valueNames.clear();
        auto nn = r.getValueNames();
        for (const auto &n: nn) {
            pd.valueNames.push_back(n);
        }
    }
    
    static void
    buildFeature(piper::Feature::Builder &b,
                 const Vamp::Plugin::Feature &f) {

        b.setHasTimestamp(f.hasTimestamp);
        if (f.hasTimestamp) {
            auto timestamp = b.initTimestamp();
            buildRealTime(timestamp, f.timestamp);
        }

        b.setHasDuration(f.hasDuration);
        if (f.hasDuration) {
            auto duration = b.initDuration();
            buildRealTime(duration, f.duration);
        }

        b.setLabel(f.label);

        if (f.values.size() > 0) {
            auto values = b.initFeatureValues(unsigned(f.values.size()));
            for (int i = 0; i < int(f.values.size()); ++i) {
                values.set(i, f.values[i]);
            }
        }
    }

    static void
    readFeature(Vamp::Plugin::Feature &f,
                const piper::Feature::Reader &r) {

        f.hasTimestamp = r.getHasTimestamp();
        if (f.hasTimestamp) {
            readRealTime(f.timestamp, r.getTimestamp());
        }

        f.hasDuration = r.getHasDuration();
        if (f.hasDuration) {
            readRealTime(f.duration, r.getDuration());
        }

        f.label = r.getLabel();

        f.values.clear();
        auto vv = r.getFeatureValues();
        for (auto v: vv) {
            f.values.push_back(v);
        }
    }
    
    static void
    buildFeatureSet(piper::FeatureSet::Builder &b,
                    const Vamp::Plugin::FeatureSet &fs,
                    const PluginOutputIdMapper &omapper) {

        auto featureset = b.initFeaturePairs(unsigned(fs.size()));
        int ix = 0;
        for (const auto &fsi : fs) {
            auto fspair = featureset[ix];
            fspair.setOutput(omapper.indexToId(fsi.first));
            auto featurelist = fspair.initFeatures(unsigned(fsi.second.size()));
            for (int j = 0; j < int(fsi.second.size()); ++j) {
                auto feature = featurelist[j];
                buildFeature(feature, fsi.second[j]);
            }
            ++ix;
        }
    }

    static void
    readFeatureSet(Vamp::Plugin::FeatureSet &fs,
                   const piper::FeatureSet::Reader &r,
                   const PluginOutputIdMapper &omapper) {

        fs.clear();
        auto pp = r.getFeaturePairs();
        for (const auto &p: pp) {
            Vamp::Plugin::FeatureList vfl;
            auto ff = p.getFeatures();
            for (const auto &f: ff) {
                Vamp::Plugin::Feature vf;
                readFeature(vf, f);
                vfl.push_back(vf);
            }
            fs[omapper.idToIndex(p.getOutput())] = vfl;
        }
    }
    
    static piper::InputDomain
    fromInputDomain(Vamp::Plugin::InputDomain d) {
        switch(d) {
        case Vamp::Plugin::TimeDomain:
            return piper::InputDomain::TIME_DOMAIN;
        case Vamp::Plugin::FrequencyDomain:
            return piper::InputDomain::FREQUENCY_DOMAIN;
        default:
            throw std::logic_error("unexpected Vamp InputDomain enum value");
        }
    }

    static Vamp::Plugin::InputDomain
    toInputDomain(piper::InputDomain d) {
        switch(d) {
        case piper::InputDomain::TIME_DOMAIN:
            return Vamp::Plugin::TimeDomain;
        case piper::InputDomain::FREQUENCY_DOMAIN:
            return Vamp::Plugin::FrequencyDomain;
        default:
            throw std::logic_error("unexpected Capnp InputDomain enum value");
        }
    }
    
    static void
    buildExtractorStaticData(piper::ExtractorStaticData::Builder &b,
                             const PluginStaticData &d) {

        b.setKey(d.pluginKey);

        auto basic = b.initBasic();
        buildBasicDescriptor(basic, d.basic);

        b.setMaker(d.maker);
        b.setRights(d.copyright);
        b.setVersion(d.pluginVersion);

        auto clist = b.initCategory(unsigned(d.category.size()));
        for (int i = 0; i < int(d.category.size()); ++i) {
            clist.set(i, d.category[i]);
        }

        b.setMinChannelCount(int(d.minChannelCount));
        b.setMaxChannelCount(int(d.maxChannelCount));

        const auto &vparams = d.parameters;
        auto plist = b.initParameters(unsigned(vparams.size()));
        for (int i = 0; i < int(vparams.size()); ++i) {
            auto pd = plist[i];
            buildParameterDescriptor(pd, vparams[i]);
        }
        
        const auto &vprogs = d.programs;
        auto pglist = b.initPrograms(unsigned(vprogs.size()));
        for (int i = 0; i < int(vprogs.size()); ++i) {
            pglist.set(i, vprogs[i]);
        }

        b.setInputDomain(fromInputDomain(d.inputDomain));

        const auto &vouts = d.basicOutputInfo;
        auto olist = b.initBasicOutputInfo(unsigned(vouts.size()));
        for (int i = 0; i < int(vouts.size()); ++i) {
            auto od = olist[i];
            buildBasicDescriptor(od, vouts[i]);
        }

        const auto &vstatic = d.staticOutputInfo;
        auto slist = b.initStaticOutputInfo(unsigned(vstatic.size()));
        int i = 0;
        for (const auto &vi: vstatic) {
            auto spair = slist[i];
            spair.setOutput(vi.first);
            auto sdata = spair.initStatic();
            sdata.setTypeURI(vi.second.typeURI);
            ++i;
        }
    }

    static void
    readExtractorStaticData(PluginStaticData &d,
                            const piper::ExtractorStaticData::Reader &r) {
        
        d.pluginKey = r.getKey();

        readBasicDescriptor(d.basic, r.getBasic());

        d.maker = r.getMaker();
        d.copyright = r.getRights();
        d.pluginVersion = r.getVersion();

        d.category.clear();
        auto cc = r.getCategory();
        for (auto c: cc) {
            d.category.push_back(c);
        }

        d.minChannelCount = r.getMinChannelCount();
        d.maxChannelCount = r.getMaxChannelCount();

        d.parameters.clear();
        auto pp = r.getParameters();
        for (auto p: pp) {
            Vamp::Plugin::ParameterDescriptor pd;
            readParameterDescriptor(pd, p);
            d.parameters.push_back(pd);
        }

        d.programs.clear();
        auto prp = r.getPrograms();
        for (auto p: prp) {
            d.programs.push_back(p);
        }

        d.inputDomain = toInputDomain(r.getInputDomain());

        d.basicOutputInfo.clear();
        auto oo = r.getBasicOutputInfo();
        for (auto o: oo) {
            PluginStaticData::Basic b;
            readBasicDescriptor(b, o);
            d.basicOutputInfo.push_back(b);
        }

        d.staticOutputInfo.clear();
        auto sp = r.getStaticOutputInfo();
        for (auto s: sp) {
            std::string id = s.getOutput();
            std::string typeURI = s.getStatic().getTypeURI();
            d.staticOutputInfo[id] = { typeURI };
        }
    }

    static void
    buildConfiguration(piper::Configuration::Builder &b,
                       const PluginConfiguration &c) {

        const auto &vparams = c.parameterValues;
        auto params = b.initParameterValues(unsigned(vparams.size()));
        int i = 0;
        for (const auto &pp : vparams) {
            auto param = params[i++];
            param.setParameter(pp.first);
            param.setValue(pp.second);
        }

        b.setCurrentProgram(c.currentProgram);
        b.setChannelCount(c.channelCount);

        auto framing = b.initFraming();
        framing.setStepSize(c.framing.stepSize);
        framing.setBlockSize(c.framing.blockSize);
    }

    static void
    readConfiguration(PluginConfiguration &c,
                      const piper::Configuration::Reader &r) {

        auto pp = r.getParameterValues();
        for (const auto &p: pp) {
            c.parameterValues[p.getParameter()] = p.getValue();
        }

        c.currentProgram = r.getCurrentProgram();
        c.channelCount = r.getChannelCount();
        c.framing.stepSize = r.getFraming().getStepSize();
        c.framing.blockSize = r.getFraming().getBlockSize();
    }
    
    static void
    buildListRequest(piper::ListRequest::Builder &r,
                     const ListRequest &resp) {

        auto p = r.initFrom(unsigned(resp.from.size()));
        for (int i = 0; i < int(resp.from.size()); ++i) {
            p.set(i, resp.from[i]);
        }
    }
    
    static void
    readListRequest(ListRequest &lr,
                    const piper::ListRequest::Reader &r) {

        lr.from.clear();
        for (auto f: r.getFrom()) {
            lr.from.push_back(f);
        }
    }

    static void
    buildListResponse(piper::ListResponse::Builder &r,
                      const ListResponse &resp) {
        
        auto p = r.initAvailable(unsigned(resp.available.size()));
        for (int i = 0; i < int(resp.available.size()); ++i) {
            auto pd = p[i];
            buildExtractorStaticData(pd, resp.available[i]);
        }
    }
    
    static void
    readListResponse(ListResponse &lr,
                     const piper::ListResponse::Reader &r) {

        lr.available.clear();
        auto pp = r.getAvailable();
        for (const auto &p: pp) {
            PluginStaticData psd;
            readExtractorStaticData(psd, p);
            lr.available.push_back(psd);
        }
    }

    static void
    buildLoadRequest(piper::LoadRequest::Builder &r,
                     const LoadRequest &req) {

        r.setKey(req.pluginKey);
        r.setInputSampleRate(req.inputSampleRate);

        std::vector<piper::AdapterFlag> flags;
        if (req.adapterFlags & Vamp::HostExt::PluginLoader::ADAPT_INPUT_DOMAIN) {
            flags.push_back(piper::AdapterFlag::ADAPT_INPUT_DOMAIN);
        }
        if (req.adapterFlags & Vamp::HostExt::PluginLoader::ADAPT_CHANNEL_COUNT) {
            flags.push_back(piper::AdapterFlag::ADAPT_CHANNEL_COUNT);
        }
        if (req.adapterFlags & Vamp::HostExt::PluginLoader::ADAPT_BUFFER_SIZE) {
            flags.push_back(piper::AdapterFlag::ADAPT_BUFFER_SIZE);
        }

        auto f = r.initAdapterFlags(unsigned(flags.size()));
        for (int i = 0; i < int(flags.size()); ++i) {
            f.set(i, flags[i]);
        }
    }

    static void
    readLoadRequest(LoadRequest &req,
                    const piper::LoadRequest::Reader &r) {

        req.pluginKey = r.getKey();
        req.inputSampleRate = r.getInputSampleRate();

        int flags = 0;
        auto aa = r.getAdapterFlags();
        for (auto a: aa) {
            if (a == piper::AdapterFlag::ADAPT_INPUT_DOMAIN) {
                flags |= Vamp::HostExt::PluginLoader::ADAPT_INPUT_DOMAIN;
            }
            if (a == piper::AdapterFlag::ADAPT_CHANNEL_COUNT) {
                flags |= Vamp::HostExt::PluginLoader::ADAPT_CHANNEL_COUNT;
            }
            if (a == piper::AdapterFlag::ADAPT_BUFFER_SIZE) {
                flags |= Vamp::HostExt::PluginLoader::ADAPT_BUFFER_SIZE;
            }
        }
        req.adapterFlags = flags;
    }

    static void
    buildLoadResponse(piper::LoadResponse::Builder &b,
                      const LoadResponse &resp,
                      const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(resp.plugin));
        auto sd = b.initStaticData();
        buildExtractorStaticData(sd, resp.staticData);
        auto conf = b.initDefaultConfiguration();
        buildConfiguration(conf, resp.defaultConfiguration);
    }

    static void
    readLoadResponse(LoadResponse &resp,
                     const piper::LoadResponse::Reader &r,
                     const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        resp.plugin = pmapper.handleToPlugin(h);
        readExtractorStaticData(resp.staticData, r.getStaticData());
        readConfiguration(resp.defaultConfiguration,
                          r.getDefaultConfiguration());
    }

    static void
    buildConfigurationRequest(piper::ConfigurationRequest::Builder &b,
                              const ConfigurationRequest &cr,
                              const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(cr.plugin));
        auto c = b.initConfiguration();
        buildConfiguration(c, cr.configuration);
    }

    static void
    readConfigurationRequest(ConfigurationRequest &cr,
                             const piper::ConfigurationRequest::Reader &r,
                             const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        cr.plugin = pmapper.handleToPlugin(h);
        auto c = r.getConfiguration();
        readConfiguration(cr.configuration, c);
    }

    static void
    buildConfigurationResponse(piper::ConfigurationResponse::Builder &b,
                               const ConfigurationResponse &cr,
                               const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(cr.plugin));
        auto olist = b.initOutputs(unsigned(cr.outputs.size()));

        for (int i = 0; i < int(cr.outputs.size()); ++i) {

            auto id = cr.outputs[i].identifier;
            StaticOutputDescriptor sd;
            if (cr.staticOutputInfo.find(id) != cr.staticOutputInfo.end()) {
                sd = cr.staticOutputInfo.at(id);
            }

            auto od = olist[i];
            buildOutputDescriptor(od, cr.outputs[i], sd);
        }
            
        auto framing = b.initFraming();
        framing.setStepSize(cr.framing.stepSize);
        framing.setBlockSize(cr.framing.blockSize);
    }

    static void
    readConfigurationResponse(ConfigurationResponse &cr,
                              const piper::ConfigurationResponse::Reader &r,
                              const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        cr.plugin = pmapper.handleToPlugin(h);
        cr.outputs.clear();
        cr.staticOutputInfo.clear();
        auto oo = r.getOutputs();
        for (const auto &o: oo) {
            Vamp::Plugin::OutputDescriptor desc;
            StaticOutputDescriptor sd;
            readOutputDescriptor(desc, sd, o);
            cr.outputs.push_back(desc);
            if (sd.typeURI != "") {
                cr.staticOutputInfo[desc.identifier] = { sd.typeURI };
            }
        }
        cr.framing.stepSize = r.getFraming().getStepSize();
        cr.framing.blockSize = r.getFraming().getBlockSize();
    }

    static void
    buildProcessInput(piper::ProcessInput::Builder &b,
                      Vamp::RealTime timestamp,
                      const std::vector<std::vector<float> > &buffers) {

        auto t = b.initTimestamp();
        buildRealTime(t, timestamp);
        auto vv = b.initInputBuffers(unsigned(buffers.size()));
        for (int ch = 0; ch < int(buffers.size()); ++ch) {
            const int n = int(buffers[ch].size());
            vv.init(ch, n);
            auto v = vv[ch];
            for (int i = 0; i < n; ++i) {
                v.set(i, buffers[ch][i]);
            }
        }
    }
    
    static void
    readProcessInput(Vamp::RealTime &timestamp,
                     std::vector<std::vector<float> > &buffers,
                     const piper::ProcessInput::Reader &b) {

        readRealTime(timestamp, b.getTimestamp());
        buffers.clear();
        auto vv = b.getInputBuffers();
        for (const auto &v: vv) {
            std::vector<float> buf;
            for (auto x: v) {
                buf.push_back(x);
            }
            buffers.push_back(buf);
        }
    }
    
    static void
    buildProcessRequest(piper::ProcessRequest::Builder &b,
                        const ProcessRequest &pr,
                        const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(pr.plugin));
        auto input = b.initProcessInput();
        buildProcessInput(input, pr.timestamp, pr.inputBuffers);
    }

    static void
    readProcessRequest(ProcessRequest &pr,
                       const piper::ProcessRequest::Reader &r,
                       const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        pr.plugin = pmapper.handleToPlugin(h);
        readProcessInput(pr.timestamp, pr.inputBuffers, r.getProcessInput());
    }

    static void
    buildProcessResponse(piper::ProcessResponse::Builder &b,
                         const ProcessResponse &pr,
                         const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(pr.plugin));
        auto f = b.initFeatures();
        buildFeatureSet(f, pr.features,
                        *pmapper.pluginToOutputIdMapper(pr.plugin));
    }
    
    static void
    readProcessResponse(ProcessResponse &pr,
                        const piper::ProcessResponse::Reader &r,
                        const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        pr.plugin = pmapper.handleToPlugin(h);
        readFeatureSet(pr.features, r.getFeatures(),
                       *pmapper.handleToOutputIdMapper(r.getHandle()));
    }

    static void
    buildFinishResponse(piper::FinishResponse::Builder &b,
                        const FinishResponse &pr,
                        const PluginHandleMapper &pmapper) {

        b.setHandle(pmapper.pluginToHandle(pr.plugin));
        auto f = b.initFeatures();
        buildFeatureSet(f, pr.features,
                        *pmapper.pluginToOutputIdMapper(pr.plugin));
    }
    
    static void
    readFinishResponse(FinishResponse &pr,
                       const piper::FinishResponse::Reader &r,
                       const PluginHandleMapper &pmapper) {

        auto h = r.getHandle();
        pr.plugin = pmapper.handleToPlugin(h);
        readFeatureSet(pr.features, r.getFeatures(),
                       *pmapper.handleToOutputIdMapper(r.getHandle()));
    }

    static void
    buildRpcRequest_List(piper::RpcRequest::Builder &b,
                         const ListRequest &req) {
        auto r = b.getRequest().initList();
        buildListRequest(r, req);
    }

    static void
    buildRpcResponse_List(piper::RpcResponse::Builder &b,
                          const ListResponse &resp) {

        auto r = b.getResponse().initList();
        buildListResponse(r, resp);
    }
    
    static void
    buildRpcRequest_Load(piper::RpcRequest::Builder &b,
                         const LoadRequest &req) {
        auto u = b.getRequest().initLoad();
        buildLoadRequest(u, req);
    }

    static void
    buildRpcResponse_Load(piper::RpcResponse::Builder &b,
                          const LoadResponse &resp,
                          const PluginHandleMapper &pmapper) {

        if (resp.plugin) {
            auto u = b.getResponse().initLoad();
            buildLoadResponse(u, resp, pmapper);
        } else {
            buildRpcResponse_Error(b, "Failed to load plugin", RRType::Load);
        }
    }

    static void
    buildRpcRequest_Configure(piper::RpcRequest::Builder &b,
                              const ConfigurationRequest &cr,
                              const PluginHandleMapper &pmapper) {
        auto u = b.getRequest().initConfigure();
        buildConfigurationRequest(u, cr, pmapper);
    }

    static void
    buildRpcResponse_Configure(piper::RpcResponse::Builder &b,
                               const ConfigurationResponse &cr,
                               const PluginHandleMapper &pmapper) {

        if (!cr.outputs.empty()) {
            auto u = b.getResponse().initConfigure();
            buildConfigurationResponse(u, cr, pmapper);
        } else {
            buildRpcResponse_Error(b, "Failed to configure plugin",
                                   RRType::Configure);
        }
    }
    
    static void
    buildRpcRequest_Process(piper::RpcRequest::Builder &b,
                            const ProcessRequest &pr,
                            const PluginHandleMapper &pmapper) {
        auto u = b.getRequest().initProcess();
        buildProcessRequest(u, pr, pmapper);
    }
    
    static void
    buildRpcResponse_Process(piper::RpcResponse::Builder &b,
                             const ProcessResponse &pr,
                             const PluginHandleMapper &pmapper) {

        auto u = b.getResponse().initProcess();
        buildProcessResponse(u, pr, pmapper);
    }
    
    static void
    buildRpcRequest_Finish(piper::RpcRequest::Builder &b,
                           const FinishRequest &req,
                           const PluginHandleMapper &pmapper) {

        auto u = b.getRequest().initFinish();
        u.setHandle(pmapper.pluginToHandle(req.plugin));
    }
    
    static void
    buildRpcResponse_Finish(piper::RpcResponse::Builder &b,
                            const FinishResponse &pr,
                            const PluginHandleMapper &pmapper) {

        auto u = b.getResponse().initFinish();
        buildFinishResponse(u, pr, pmapper);
    }

    static void
    buildRpcResponse_Error(piper::RpcResponse::Builder &b,
                           const std::string &errorText,
                           RRType responseType)
    {
        std::string type;

        auto e = b.getResponse().initError();

        if (responseType == RRType::List) {
            type = "list";
        } else if (responseType == RRType::Load) {
            type = "load";
        } else if (responseType == RRType::Configure) {
            type = "configure";
        } else if (responseType == RRType::Process) {
            type = "process";
        } else if (responseType == RRType::Finish) {
            type = "finish";
        } else {
            type = "invalid";
        }

        e.setCode(0);

        if (responseType == RRType::NotValid) {
            e.setMessage(errorText);
        } else {
            e.setMessage
                (std::string("error in ") + type + " request: " + errorText);
        }
    }

    static void
    buildRpcResponse_Exception(piper::RpcResponse::Builder &b,
                               const std::exception &e,
                               RRType responseType)
    {
        return buildRpcResponse_Error(b, e.what(), responseType);
    }
    
    static RRType
    getRequestResponseType(const piper::RpcRequest::Reader &r) {
        switch (r.getRequest().which()) {
        case piper::RpcRequest::Request::Which::LIST:
            return RRType::List;
        case piper::RpcRequest::Request::Which::LOAD:
            return RRType::Load;
        case piper::RpcRequest::Request::Which::CONFIGURE:
            return RRType::Configure;
        case piper::RpcRequest::Request::Which::PROCESS:
            return RRType::Process;
        case piper::RpcRequest::Request::Which::FINISH:
            return RRType::Finish;
        }
        return RRType::NotValid;
    }

    static RRType
    getRequestResponseType(const piper::RpcResponse::Reader &r) {
        switch (r.getResponse().which()) {
        case piper::RpcResponse::Response::Which::ERROR:
            return RRType::NotValid;
        case piper::RpcResponse::Response::Which::LIST:
            return RRType::List;
        case piper::RpcResponse::Response::Which::LOAD:
            return RRType::Load;
        case piper::RpcResponse::Response::Which::CONFIGURE:
            return RRType::Configure;
        case piper::RpcResponse::Response::Which::PROCESS:
            return RRType::Process;
        case piper::RpcResponse::Response::Which::FINISH:
            return RRType::Finish;
        }
        return RRType::NotValid;
    }
    
    static void
    readRpcResponse_Error(int &code,
                          std::string &message,
                          const piper::RpcResponse::Reader &r) {
        if (getRequestResponseType(r) != RRType::NotValid) {
            throw std::logic_error("not an error response");
        }
        code = r.getResponse().getError().getCode();
        message = r.getResponse().getError().getMessage();
    }
        
    static void
    readRpcRequest_List(ListRequest &req,
                        const piper::RpcRequest::Reader &r) {
        if (getRequestResponseType(r) != RRType::List) {
            throw std::logic_error("not a list request");
        }
        readListRequest(req, r.getRequest().getList());
    }

    static void
    readRpcResponse_List(ListResponse &resp,
                         const piper::RpcResponse::Reader &r) {
        if (getRequestResponseType(r) != RRType::List) {
            throw std::logic_error("not a list response");
        }
        readListResponse(resp, r.getResponse().getList());
    }
    
    static void
    readRpcRequest_Load(LoadRequest &req,
                        const piper::RpcRequest::Reader &r) {
        if (getRequestResponseType(r) != RRType::Load) {
            throw std::logic_error("not a load request");
        }
        readLoadRequest(req, r.getRequest().getLoad());
    }

    static void
    readRpcResponse_Load(LoadResponse &resp,
                         const piper::RpcResponse::Reader &r,
                         const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Load) {
            throw std::logic_error("not a load response");
        }
        resp = {};
        readLoadResponse(resp, r.getResponse().getLoad(), pmapper);
    }
    
    static void
    readRpcRequest_Configure(ConfigurationRequest &req,
                             const piper::RpcRequest::Reader &r,
                             const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Configure) {
            throw std::logic_error("not a configuration request");
        }
        readConfigurationRequest(req, r.getRequest().getConfigure(), pmapper);
    }

    static void
    readRpcResponse_Configure(ConfigurationResponse &resp,
                              const piper::RpcResponse::Reader &r,
                              const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Configure) {
            throw std::logic_error("not a configuration response");
        }
        resp = {};
        readConfigurationResponse(resp,
                                  r.getResponse().getConfigure(),
                                  pmapper);
    }
    
    static void
    readRpcRequest_Process(ProcessRequest &req,
                           const piper::RpcRequest::Reader &r,
                           const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Process) {
            throw std::logic_error("not a process request");
        }
        readProcessRequest(req, r.getRequest().getProcess(), pmapper);
    }

    static void
    readRpcResponse_Process(ProcessResponse &resp,
                            const piper::RpcResponse::Reader &r,
                            const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Process) {
            throw std::logic_error("not a process response");
        }
        resp = {};
        readProcessResponse(resp, r.getResponse().getProcess(), pmapper);
    }
    
    static void
    readRpcRequest_Finish(FinishRequest &req,
                          const piper::RpcRequest::Reader &r,
                          const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Finish) {
            throw std::logic_error("not a finish request");
        }
        auto h = r.getRequest().getFinish().getHandle();
        req.plugin = pmapper.handleToPlugin(h);
    }

    static void
    readRpcResponse_Finish(FinishResponse &resp,
                           const piper::RpcResponse::Reader &r,
                           const PluginHandleMapper &pmapper) {
        if (getRequestResponseType(r) != RRType::Finish) {
            throw std::logic_error("not a finish response");
        }
        resp = {};
        readFinishResponse(resp, r.getResponse().getFinish(), pmapper);
    }
};

}


