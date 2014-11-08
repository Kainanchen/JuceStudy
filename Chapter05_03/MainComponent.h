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

class Counter : public Thread, public Component
{
public:
	Counter();
	~Counter();

	void resized();
	void run();
	
private:
	int counter;
	Label label;
};


class MainContentComponent : public Component,
							 public Button::Listener
{
	
public:
	MainContentComponent();
	~MainContentComponent();

	void resized();
	void buttonClicked(Button* button);
	
private:
	TextButton startThreadButton;
	TextButton stopThreadButton;
	
	Counter *counter1 = new Counter();
	Counter *counter2 = new Counter();
	OwnedArray<Counter> counters;

};



#endif /* defined(__Lipsdrum__MainComponent__) */
