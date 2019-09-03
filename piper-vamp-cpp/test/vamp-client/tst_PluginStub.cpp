#include "catch/catch.hpp"
#include "vamp-client/Loader.h"
#include "vamp-client/PluginClient.h"
#include "vamp-client/PiperVampPlugin.h"
#include "vamp-support/RequestResponse.h"
#include <vector>

using namespace piper_vamp;
using namespace piper_vamp::client;
using AudioBuffer = std::vector<std::vector<float>>;

// This stub fakes the interaction with a Piper server
// Here we only need to implement the configure method 
// due to testing only the initialise implemention of PiperVampPlugin
class StubClient : public PluginClient
{
public:
    StubClient(PluginStaticData staticData) : m_staticData(staticData) {}
    
    ConfigurationResponse
    configure(PiperVampPlugin* plugin,
              PluginConfiguration config) override
    {
        const float scale = plugin->getParameter("framing-scale");
        ConfigurationResponse cr;
        cr.plugin = plugin;
        
        // we want to return different framing sizes than config provides
        // there isn't really any need to be doing this with a plugin param
        cr.framing.blockSize = config.framing.blockSize * scale;
        cr.framing.stepSize = config.framing.stepSize * scale;
        
        // just return some outputs anyway 
        // to avoid a failure case we are not testing here.
        Vamp::Plugin::OutputDescriptor output;
        const auto basic = m_staticData.basicOutputInfo[0];
        output.identifier = basic.identifier;
        output.name = basic.name;
        output.description = basic.description;
        cr.outputs = {output};
        return cr;                   
    }
    
    Vamp::Plugin::FeatureSet
    process(PiperVampPlugin* /*plugin*/,
            AudioBuffer /*channels*/,
            Vamp::RealTime /*timestamp*/) override
    {
        return {};
    }
    
    Vamp::Plugin::FeatureSet
    finish(PiperVampPlugin* /*plugin*/) override
    {
        return {};
    }
    
    void
    reset(PiperVampPlugin* /*plugin*/, PluginConfiguration /*config*/) override
    {}
private:
    PluginStaticData m_staticData;
};


TEST_CASE("Init plugin with parameter dependent preferred framing sizes") {
    const std::size_t initialBlockSize = 1024;
    const std::size_t initialStepSize = 512;
    PluginConfiguration defaultConfig;
    defaultConfig.channelCount = 1;
    defaultConfig.framing.blockSize = initialBlockSize;
    defaultConfig.framing.stepSize = initialStepSize;
    defaultConfig.parameterValues = {{"framing-scale", 1.0}};
    
    Vamp::PluginBase::ParameterDescriptor stubParam;
    stubParam.identifier = "framing-scale";
    stubParam.name = "Framing Scale Factor";
    stubParam.description = "Scales the preferred framing sizes";
    stubParam.maxValue = 2.0; 
    
    PluginStaticData staticData;
    staticData.pluginKey = "stub";
    staticData.basic = {"param-init", "Stub", "Testing init"};
    staticData.maker = "Lucas Thompson";
    staticData.copyright = "GPL";
    staticData.pluginVersion = 1;
    staticData.category = {"Test"};
    staticData.minChannelCount = 1;
    staticData.maxChannelCount = 1;
    staticData.parameters = {stubParam};
    staticData.inputDomain = Vamp::Plugin::InputDomain::TimeDomain;
    staticData.basicOutputInfo = {{"output", "NA", "Not real"}};

    StubClient stub {staticData};
    
    PiperVampPlugin vampPiperAdapter {
        &stub, 
        "stub", // plugin key
        44100.0, // sample rate
        0, // adapter flags, don't care here
        staticData, 
        defaultConfig 
    };
    
    const auto initWithPreferredFraming = [&]() -> bool {
        return vampPiperAdapter.initialise(
            1, 
            vampPiperAdapter.getPreferredStepSize(), 
            vampPiperAdapter.getPreferredBlockSize()
        );  
    };
    
    const AudioBuffer monoAudio {
        std::vector<float>(vampPiperAdapter.getPreferredBlockSize())
    };
    const std::vector<const float*> channelPtrs {
        monoAudio[0].data()
    };
    
    SECTION("Initialises with default parameters")
    {
        REQUIRE( initWithPreferredFraming() );   
    }
    
    SECTION("Fails to init when changing framing influencing parameter")
    {
        const float scalingFactor = 2.0;
        vampPiperAdapter.setParameter("framing-scale", scalingFactor);
        REQUIRE( initWithPreferredFraming() == false );
        const float configuredStepSize = vampPiperAdapter.getPreferredStepSize();
        const float configuredBlockSize = vampPiperAdapter.getPreferredBlockSize();
        REQUIRE( configuredStepSize == initialStepSize * scalingFactor );
        REQUIRE( configuredBlockSize == initialBlockSize * scalingFactor );
    }
    
    SECTION("Cannot process after a failed init call (due to framing)")
    {
        const float scalingFactor = 2.0;
        vampPiperAdapter.setParameter("framing-scale", scalingFactor);
        REQUIRE( initWithPreferredFraming() == false );
        REQUIRE_THROWS( vampPiperAdapter.process(channelPtrs.data(), {}) );
        REQUIRE_THROWS( initWithPreferredFraming() );
    }
    
    SECTION("Can process after correctly initialising framing")
    {
        const float scalingFactor = 2.0;
        vampPiperAdapter.setParameter("framing-scale", scalingFactor);
        REQUIRE( initWithPreferredFraming() == false );
        REQUIRE( initWithPreferredFraming() );
        REQUIRE( vampPiperAdapter.process(channelPtrs.data(), {}).empty() );
    }
}
