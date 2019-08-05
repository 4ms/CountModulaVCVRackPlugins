//----------------------------------------------------------------------------
//	/^M^\ Count Modula Plugin.
//----------------------------------------------------------------------------
#include "CountModula.hpp"

Plugin *pluginInstance;

void init(Plugin *p) {
	pluginInstance = p;

	// Add all Models defined throughout the plugin
	p->addModel(modelAnalogueShiftRegister);
	p->addModel(modelAttenuator);	
	p->addModel(modelBinarySequencer);
	p->addModel(modelBurstGenerator);
	p->addModel(modelBooleanAND);
	p->addModel(modelBooleanOR);
	p->addModel(modelBooleanVCNOT);
	p->addModel(modelBooleanXOR);
	p->addModel(modelComparator);
	p->addModel(modelCVSpreader);
	p->addModel(modelEventArranger);
	p->addModel(modelG2T);
	p->addModel(modelGateDelay);
	p->addModel(modelGateModifier);
	p->addModel(modelManualCV);
	p->addModel(modelManualGate);
	p->addModel(modelMatrixMixer);
	p->addModel(modelMinimusMaximus);
	p->addModel(modelMixer);
	p->addModel(modelMorphShaper);
	p->addModel(modelMultiplexer);
	p->addModel(modelMute);
	p->addModel(modelMuteIple);
	p->addModel(modelGateDelayMT);
	p->addModel(modelPolyrhythmicGenerator);
	p->addModel(modelRectifier);
	p->addModel(modelSampleAndHold);	
	p->addModel(modelShepardGenerator);
	p->addModel(modelSRFlipFlop);
	p->addModel(modelStepSequencer8);
	p->addModel(modelTFlipFlop);
	p->addModel(modelTriggerSequencer8);
	p->addModel(modelTriggerSequencer16);
	p->addModel(modelVCFrequencyDivider);
	p->addModel(modelVCPolarizer);
	p->addModel(modelVoltageControlledSwitch);
	p->addModel(modelVoltageInverter);
	p->addModel(modelMangler);
	p->addModel(modelBasicSequencer8);
	p->addModel(modelSequencerExpanderCV8);	
	p->addModel(modelSequencerExpanderOut8);
	p->addModel(modelSequencerExpanderTrig8);
	p->addModel(modelSubHarmonicGenerator);
	p->addModel(modelPolyrhythmicGeneratorMkII);
	p->addModel(modelVCFrequencyDividerMkII);
	p->addModel(modelGatedComparator);
	p->addModel(modelSlopeDetector);
	p->addModel(modelSequencerExpanderRM8);
	
	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}

