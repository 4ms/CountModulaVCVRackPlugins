//----------------------------------------------------------------------------
//	/^M^\ Count Modula Plugin for VCV Rack - initialise models
//  Copyright (C) 2022  Adam Verspaget
//----------------------------------------------------------------------------

// Add all Models defined throughout the plugin
p->addModel(modelAnalogueShiftRegister);	
// #ifndef METAMODULE
p->addModel(modelArpeggiator);	
// #endif
p->addModel(modelAttenuator);	
p->addModel(modelAttenuverter);	
p->addModel(modelBarGraph);	
p->addModel(modelBasicSequencer8);	
p->addModel(modelBinaryComparator);	
p->addModel(modelBinarySequencer);	
p->addModel(modelBinarySequencerPlus);	
#ifndef METAMODULE
p->addModel(modelBlank12HP);	
p->addModel(modelBlank16HP);	
p->addModel(modelBlank20HP);	
p->addModel(modelBlank24HP);	
p->addModel(modelBlank2HP);	
p->addModel(modelBlank4HP);	
p->addModel(modelBlank8HP);	
#endif
p->addModel(modelBooleanAND);	
p->addModel(modelBooleanOR);	
p->addModel(modelBooleanVCNOT);	
p->addModel(modelBooleanXOR);	
// #ifndef METAMODULE
p->addModel(modelBreakout);	
// #endif
p->addModel(modelBurstGenerator);	
p->addModel(modelBurstGenerator64);	
p->addModel(modelBusRoute);	
p->addModel(modelBusRoute2);	
p->addModel(modelCarousel);	
p->addModel(modelChances);	
p->addModel(modelClockDivider);	
#ifndef METAMODULE
p->addModel(modelClockedRandomGateExpanderCV);	
p->addModel(modelClockedRandomGateExpanderLog);	
#endif
p->addModel(modelClockedRandomGates);	
p->addModel(modelComparator);	
p->addModel(modelCVSpreader);	
p->addModel(modelGateSequencer16b);	
p->addModel(modelEuclid);	
#ifndef METAMODULE
p->addModel(modelEuclidExpanderCV);	
#endif
p->addModel(modelEventArranger);	
p->addModel(modelEventTimer);	
p->addModel(modelEventTimer2);	
p->addModel(modelFade);	
#ifndef METAMODULE
p->addModel(modelFadeExpander);	
#endif
p->addModel(modelG2T);	
p->addModel(modelGatedComparator);	
p->addModel(modelGateDelay);	
p->addModel(modelGateDelayMT);	
p->addModel(modelGateModifier);	
p->addModel(modelGateSequencer16);	
p->addModel(modelGateSequencer8);	
p->addModel(modelHyperManiacalLFO);	
#ifndef METAMODULE
p->addModel(modelHyperManiacalLFOExpander);	
p->addModel(modelLightStrip);	
#endif
p->addModel(modelMangler);	
p->addModel(modelManifold);	
p->addModel(modelManualCV);	
p->addModel(modelManualCV2);	
p->addModel(modelManualGate);	
p->addModel(modelMasterReset);	
p->addModel(modelMatrixCombiner);	
p->addModel(modelMatrixMixer);	
#ifndef METAMODULE
p->addModel(modelMegalomaniac);	
#endif
p->addModel(modelMiniMix);	
p->addModel(modelMinimusMaximus);	
p->addModel(modelMixer);	
p->addModel(modelMorphShaper);	
p->addModel(modelMult);	
p->addModel(modelMultiplexer);	
p->addModel(modelMultiStepSequencer);	
p->addModel(modelMute);	
p->addModel(modelMuteIple);	
p->addModel(modelNibbleTriggerSequencer);	
p->addModel(modelOctetTriggerSequencer);	
#ifndef METAMODULE
p->addModel(modelOctetTriggerSequencerCVExpander);	
p->addModel(modelOctetTriggerSequencerGateExpander);	
#endif
p->addModel(modelOffsetGenerator);	
p->addModel(modelOscilloscope);	
#ifndef METAMODULE
p->addModel(modelPalette);	
#endif
p->addModel(modelPolyChances);	
p->addModel(modelPolyG2T);	
p->addModel(modelPolyGateModifier);	
p->addModel(modelPolyLogic);	
p->addModel(modelPolyMinMax);	
p->addModel(modelPolyMute);	
p->addModel(modelPolyrhythmicGenerator);	
p->addModel(modelPolyrhythmicGeneratorMkII);	
p->addModel(modelPolyVCPolarizer);	
p->addModel(modelPolyVCSwitch);	
#ifndef METAMODULE
p->addModel(modelRackEarLeft);	
p->addModel(modelRackEarRight);	
#endif
p->addModel(modelRandomAccessSwitch18);
p->addModel(modelRandomAccessSwitch81);
p->addModel(modelRectifier);	
p->addModel(modelSampleAndHold);	
p->addModel(modelSampleAndHold2);	
p->addModel(modelSequenceEncoder);	
p->addModel(modelSequencer16);	
p->addModel(modelSequencer64);
p->addModel(modelSequencer8);	
#ifndef METAMODULE
p->addModel(modelSequencerChannel16);	
p->addModel(modelSequencerChannel8);	
p->addModel(modelSequencerExpanderCV8);	
p->addModel(modelSequencerExpanderLog8);	
p->addModel(modelSequencerExpanderOut8);	
p->addModel(modelSequencerExpanderRM8);	
p->addModel(modelSequencerExpanderTrig8);	
p->addModel(modelSequencerExpanderTSG);	
p->addModel(modelSequencerGates16);	
p->addModel(modelSequencerGates8);	
p->addModel(modelSequencerTriggers16);	
p->addModel(modelSequencerTriggers8);	
#endif
p->addModel(modelShepardGenerator);	
p->addModel(modelShiftRegister16);	
p->addModel(modelShiftRegister32);	
p->addModel(modelSingleDFlipFlop);	
p->addModel(modelSingleSRFlipFlop);	
p->addModel(modelSingleTFlipFlop);	
p->addModel(modelSlopeDetector);	
p->addModel(modelSRFlipFlop);	
p->addModel(modelStack);
p->addModel(modelStartupDelay);	
p->addModel(modelStepSequencer8);	
p->addModel(modelSubHarmonicGenerator);	
p->addModel(modelSwitch16To1);	
p->addModel(modelSwitch1To16);	
p->addModel(modelSwitch1To8);	
p->addModel(modelSwitch2);	
p->addModel(modelSwitch3);	
p->addModel(modelSwitch4);	
p->addModel(modelSwitch8To1);	
p->addModel(modelTFlipFlop);	
p->addModel(modelTriggerSequencer16);	
p->addModel(modelTriggerSequencer8);	
#ifndef METAMODULE
p->addModel(modelVCFrequencyDivider);	
#endif
p->addModel(modelVCFrequencyDividerMkII);	
p->addModel(modelVCPolarizer);	
p->addModel(modelVCPulseDivider);	
p->addModel(modelVoltageControlledSwitch);	
p->addModel(modelVoltageInverter);	
p->addModel(modelVoltageScaler);	
