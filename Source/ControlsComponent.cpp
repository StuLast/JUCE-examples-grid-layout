/*
  ==============================================================================

    ControlsComponent.cpp
    Created: 7 Jul 2020 2:06:11pm
    Author:  stuar

  ==============================================================================
*/

#include <JuceHeader.h>
#include "ControlsComponent.h"

//==============================================================================
ControlsComponent::ControlsComponent()
{


    dial1.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
   

    setSize(100, 100);
    addAndMakeVisible(dial1);

}

ControlsComponent::~ControlsComponent()
{
}

void ControlsComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::navy);
}

void ControlsComponent::resized()
{
    dial1.setBounds(getLocalBounds());
}
