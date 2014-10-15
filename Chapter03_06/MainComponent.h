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
							 public Label::Listener
{
	
public:
	MainContentComponent();
	
	void resized();
	void sliderValueChanged(Slider* slider);
	void labelTextChanged(Label* label);
	
private:
	OwnedArray<Slider> sliders;
	OwnedArray<Label> labels;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
