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
    setSize(100, 400);

    dial1.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
    addAndMakeVisible(dial1);

    dial2.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    dial2.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
    addAndMakeVisible(dial2);
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
    juce::Grid grid;
    
    using Track = juce::Grid::TrackInfo;
    using Fr = juce::Grid::Fr;

    //Setup grid with 1 row and 2 equally sized columns
    grid.templateRows = { Track (Fr(1)) };
    grid.templateColumns = { Track (Fr(1)), Track (Fr(1)) };

    //add items to grid
    grid.items = { juce::GridItem(dial1), juce::GridItem(dial2) };

    //Render the grid as described above in the space provided by local bounds

    grid.performLayout(getLocalBounds());

}
