/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TheMeadowlarkAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                           public juce::Button::Listener,
                                           public juce::Slider::Listener
{
public:
    TheMeadowlarkAudioProcessorEditor (TheMeadowlarkAudioProcessor&);
    ~TheMeadowlarkAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void buttonClicked (juce::Button*) override;
    void sliderValueChanged (juce::Slider*) override;

private:
    
    juce::TextButton onButton {"On"};
    
    juce::Slider reverbMixSlider;
    
    juce::Slider speedSlider;
  
    TheMeadowlarkAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TheMeadowlarkAudioProcessorEditor)
};
