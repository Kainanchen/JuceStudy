//
//  MainComponent.h
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-19.
//
//

#ifndef __Lipsdrum__MainComponent__
#define __Lipsdrum__MainComponent__

#include <iostream>
#include "../JuceLibraryCode/JuceHeader.h"




class MainContentComponent : public Component,
							 public Button::Listener
{
	
public:
	MainContentComponent();
	void resized();
	
	void buttonClicked(Button* button);
	
	class AltLookAndFeel : public LookAndFeel_V3
	{
	public:
		AltLookAndFeel()
		{
			setColour(Slider::thumbColourId, Colours::red);
		}
	};
	
private:
	Slider slider1;
	Slider slider2;
	ToggleButton toggle1;
	AltLookAndFeel altLookAndFeel;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
