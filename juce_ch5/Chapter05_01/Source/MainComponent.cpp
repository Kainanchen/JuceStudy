/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent(): value (1.0),slider(Slider::LinearHorizontal,Slider::NoTextBox)
{
    label.setEditable(true);
    slider.getValueObject().referTo(value);
    label.getTextValue().referTo(value);
    addAndMakeVisible(&slider);
    addAndMakeVisible(&label);
    setSize (500, 400);
}



void MainContentComponent::resized()
{
    slider.setBounds(10, 10, getWidth()-20, 20);
    label.setBounds(10, 40, getWidth()-20, 20);
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
