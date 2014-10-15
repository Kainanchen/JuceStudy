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
	void paint(Graphics& g);
	
	void mouseEnter(const MouseEvent& event);
	void mouseMove(const MouseEvent& event);
	void mouseDown(const MouseEvent& event);
	void mouseDrag(const MouseEvent& event);
	void mouseUp(const MouseEvent& event);
	void mouseExit(const MouseEvent& event);
	
	void handleMouse(const MouseEvent& event);
	
private:
	String text;
	int x, y;
	
};



#endif /* defined(__Lipsdrum__MainComponent__) */
