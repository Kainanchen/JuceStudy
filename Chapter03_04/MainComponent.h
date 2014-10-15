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
	~MainContentComponent();
	
	void resized();
	
private:
	OwnedArray<TextButton> buttons;
};



#endif /* defined(__Lipsdrum__MainComponent__) */
