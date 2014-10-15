/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "NumLabel.h"

//==============================================================================
/*
 This component lives inside our window, and this is where you should put all
 your controls and content.
 */

class MainContentComponent   : public Component,
public Button::Listener,
public Slider::Listener,
public Label::Listener
{
public:
    //==============================================================================
    MainContentComponent();
    void resized();
    void buttonClicked(Button* button);
    void sliderValueChanged(Slider* slider);
    void labelTextChanged(Label* label);
private:
    TextButton button1;
    Slider slider1;
    NumericalLabel label1;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED