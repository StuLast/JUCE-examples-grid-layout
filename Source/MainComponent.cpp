#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    addAndMakeVisible(controls);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::beige);

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::antiquewhite);
 
}

void MainComponent::resized()
{
    juce::Rectangle<int> controlsArea = getLocalBounds();
    juce::Rectangle<int> dialArea = controlsArea.removeFromBottom(controlsArea.getHeight() * 0.25).removeFromLeft(controlsArea.getWidth() *0.5);
    controls.setBounds(dialArea);
}
