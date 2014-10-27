//
//  MainComponent.h
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-19.
//
//

#ifndef __Lipsdrum__MainComponent__
#define __Lipsdrum__MainComponent__

#include "../JuceLibraryCode/JuceHeader.h"




class MainContentComponent : public Component
{
	
public:
	MainContentComponent();
	void resized();
private:
	Value value;
	Slider slider;
	Label label;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
