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
							 public ButtonListener,
							 public SliderListener
{
	
public:
	MainContentComponent();
	void resized();
	void buttonClicked(Button* button);
	void sliderValueChanged(Slider* slider);
	
private:
	TextButton readFileButton;
	ImageComponent imageComponent;
	Slider brightnessSlider;
	TextButton writeFileButton;
	Image origImage, procImage;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
