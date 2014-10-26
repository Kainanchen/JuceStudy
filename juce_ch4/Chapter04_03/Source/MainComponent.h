/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component,public Button::Listener,public Slider::Listener
{
public:
    //==============================================================================
    MainContentComponent();
   

    void buttonClicked (Button* button);
    void resized();
    void sliderValueChanged(Slider* slider);

private:
    //==============================================================================
    TextButton readFileButton;
    ImageComponent imageComponent;
    Image origImage,procImage;
    Slider brightnessSlider;
    TextButton writeFileButton;
};


#endif  // MAINCOMPONENT_H_INCLUDED
