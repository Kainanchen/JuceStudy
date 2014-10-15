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




class MainContentComponent : public Component
{
public:
	MainContentComponent();
	
	void paint(Graphics);
	void resized();
	
private:
	TextButton button1;
	Slider slider1;
	Label label1;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
