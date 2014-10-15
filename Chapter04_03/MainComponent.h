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
#include "MediaPlayer.h"




class MainContentComponent : public Component
{
	
public:
	MainContentComponent();
	void resized();
	
private:
	MediaPlayer player;
	
};



#endif /* defined(__Lipsdrum__MainComponent__) */
