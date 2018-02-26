#include "AS.hpp"

Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = TOSTRING(SLUG);
	p->version = TOSTRING(VERSION);
	//OSCILLATORS
	p->addModel(modelSineOsc);
	p->addModel(modelSawOsc);
	//TOOLS
	p->addModel(modelADSR);
	p->addModel(modelVCA);
	p->addModel(modelQuadVCA);
	p->addModel(modelTriLFO);
	p->addModel(modelBPMClock);
	p->addModel(modelSEQ16);
	p->addModel(modelMixer8ch);
	p->addModel(modelMonoVUmeter);
	p->addModel(modelStereoVUmeter);
	p->addModel(modelSteps);
	p->addModel(modelLaunchGate);
	p->addModel(modelKillGate);
	p->addModel(modelSignalDelay);
	p->addModel(modelMultiple2_5);
	p->addModel(modelMerge2_5);
	p->addModel(modelTriggersMKI);
	p->addModel(modelTriggersMKII);
	//EFFECTS	
	p->addModel(modelDelayPlusFx);
	p->addModel(modelPhaserFx);
	p->addModel(modelReverbFx);
	p->addModel(modelSuperDriveFx);
	p->addModel(modelTremoloFx);
	p->addModel(modelWaveShaper);
	//BLANK PANELS
	p->addModel(modelBlankPanel4);
	p->addModel(modelBlankPanel6);
	p->addModel(modelBlankPanel8);

}

// Any other plugin initialization may go here.
// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.

/*
	//OSCILLATORS
	p->addModel(createModel<SawOscWidget>("AS", "SawOSC", "TinySawish", OSCILLATOR_TAG));
	p->addModel(createModel<SineOscWidget>("AS", "SineOSC", "TinySine", OSCILLATOR_TAG));
	//TOOLS
	p->addModel(createModel<ADSRWidget>("AS", "ADSR", "ADSR", ENVELOPE_GENERATOR_TAG));
	p->addModel(createModel<VCAWidget>("AS", "VCA", "VCA", AMPLIFIER_TAG));
	p->addModel(createModel<QuadVCAWidget>("AS", "QuadVCA", "Quad VCA/Mixer", AMPLIFIER_TAG, MIXER_TAG));
	p->addModel(createModel<TriLFOWidget>("AS", "TriLFO", "Tri LFO", LFO_TAG));
	p->addModel(createModel<BPMClockWidget>("AS", "BPMClock", "BPM Clock", CLOCK_TAG));
	p->addModel(createModel<SEQ16Widget>("AS", "SEQ16", "16-Step Sequencer", SEQUENCER_TAG));
	p->addModel(createModel<Mixer8chWidget>("AS", "Mixer8ch", "8-CH Mixer", MIXER_TAG, AMPLIFIER_TAG));
	p->addModel(createModel<monoVUmeterWidget>("AS", "MonoVUmeterWidget", "Mono VU meter", VISUAL_TAG, UTILITY_TAG));
	p->addModel(createModel<stereoVUmeterWidget>("AS", "StereoVUmeterWidget", "Stereo VU meter", VISUAL_TAG, UTILITY_TAG));
	p->addModel(createModel<StepsWidget>("AS", "Steps", "Steps", SWITCH_TAG, SEQUENCER_TAG, UTILITY_TAG));
	p->addModel(createModel<LaunchGateWidget>("AS", "LaunchGate", "Launch Gate", SWITCH_TAG, SEQUENCER_TAG, UTILITY_TAG, DELAY_TAG));
	p->addModel(createModel<KillGateWidget>("AS", "KillGate", "Kill Gate", SWITCH_TAG, SEQUENCER_TAG, UTILITY_TAG, DELAY_TAG));
	p->addModel(createModel<SignalDelayWidget>("AS", "SignalDelay", "Signal Delay", UTILITY_TAG, DELAY_TAG));
	p->addModel(createModel<Multiple2_5Widget>("AS", "Multiple2_5", "Multiple 2 x 5", MULTIPLE_TAG, UTILITY_TAG));
	p->addModel(createModel<Merge2_5Widget>("AS", "Merge2_5", "Merge 2 x 5", MULTIPLE_TAG, UTILITY_TAG));
	p->addModel(createModel<TriggersWidget>("AS", "Triggers", "Triggers", SWITCH_TAG, UTILITY_TAG));
	p->addModel(createModel<TriggersMKIWidget>("AS", "TriggersMKI", "Triggers MKI", SWITCH_TAG, UTILITY_TAG));
	p->addModel(createModel<TriggersMKIIWidget>("AS", "TriggersMKII", "Triggers MKII", SWITCH_TAG, UTILITY_TAG));
	//EFFECTS
	p->addModel(createModel<DelayPlusFxWidget>("AS", "DelayPlusFx", "Delay Plus FX", DELAY_TAG, EFFECT_TAG));
	p->addModel(createModel<PhaserFxWidget>("AS", "PhaserFx", "Phaser FX", EFFECT_TAG));
	p->addModel(createModel<ReverbFxWidget>("AS", "ReverbFx", "Reverb FX", REVERB_TAG, EFFECT_TAG));
	p->addModel(createModel<SuperDriveFxWidget>("AS", "SuperDriveFx", "Super Drive FX", AMPLIFIER_TAG, EFFECT_TAG));
	p->addModel(createModel<TremoloFxWidget>("AS", "TremoloFxWidget", "Tremolo FX", EFFECT_TAG));
	p->addModel(createModel<WaveShaperWidget>("AS", "WaveShaper", "Wave Shaper FX", WAVESHAPER_TAG, EFFECT_TAG));
	//BLANK PANELS
	p->addModel(createModel<BlankPanel4Widget>("AS", "BlankPanel4", "Blank Panel 4", BLANK_TAG));
	p->addModel(createModel<BlankPanel6Widget>("AS", "BlankPanel6", "Blank Panel 6", BLANK_TAG));
	p->addModel(createModel<BlankPanel8Widget>("AS", "BlankPanel8", "Blank Panel 8", BLANK_TAG));

	*/