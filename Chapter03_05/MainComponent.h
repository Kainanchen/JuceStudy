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
	
private:
	OwnedArray<Button> buttons;
	Label label;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
