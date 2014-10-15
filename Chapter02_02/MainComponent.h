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
#include "NumericalLabel.h"



class MainContentComponent : public Component,
							 public Button::Listener,
							 public Slider::Listener,
							 public Label::Listener
{
	
public:
	MainContentComponent();
	void resized();
	void buttonClicked(Button* button);
	void sliderValueChanged(Slider* slider);
	void labelTextChanged(Label* label);
		
private:
	TextButton button1;
	Slider slider1;
	NumericalLabel label1;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
