/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    addAndMakeVisible(&form);
    setSize (form.getWidth(), form.getHeight());
}



void MainContentComponent::resized()
{
    form.setBounds(0, 0, getWidth(), getHeight());
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
