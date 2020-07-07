/*
  ==============================================================================

    ControlsComponent.h
    Created: 7 Jul 2020 2:06:11pm
    Author:  stuar

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class ControlsComponent  : public juce::Component
{
public:
    ControlsComponent();
    ~ControlsComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider dial1;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlsComponent)
};
