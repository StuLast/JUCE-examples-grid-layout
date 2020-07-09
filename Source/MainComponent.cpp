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
    // 1. Instantiate a grid class
    juce::Grid grid;

    // The track structure is an array to hold column or row definition data
    using Track = juce::Grid::TrackInfo;  

    // Fr is a strucutre representing the "fraction" of the space available and is the relative working unit of the grid.
    // Altertnatively - you can use pixels in the grid setup below
    using Fr = juce::Grid::Fr;  
    
    // Setup grid with 2 rows, with the space being evenly "divided" by 4, 
    // then 3/4 being allocated to the top row
    // and 1/4 being allocated to the bottom row
    grid.templateRows = { Track(Fr(3)), Track(Fr(1)) };
    grid.templateColumns = { Track(Fr(1)) };

    // Add items to grid.  Note that the controls component contains a grid layout of its own.
    // This way we can combine the layout of components in isolation, and replicate as needed.
    grid.items = { juce::GridItem(), juce::GridItem(controls) };

    //Render the grid as described above in the space provided by local bounds

    grid.performLayout(getLocalBounds());
}
