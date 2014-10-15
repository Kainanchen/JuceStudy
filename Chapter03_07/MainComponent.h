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
							 public Slider::Listener,
							 public Button::Listener
{
	
public:
	MainContentComponent();
	void resized();
	
	void sliderValueChanged(Slider* slider);
	void buttonClicked(Button* button);
	
private:
	ScopedPointer<Slider> slider1;
	ScopedPointer<Label> label1;
	ScopedPointer<Button> button1;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
