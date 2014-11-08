//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"

Counter::Counter()
: Thread ("Counter"),
  counter(0)
{
		addAndMakeVisible(&label);
}

Counter::~Counter()
{
		stopThread (3000);
}

void Counter::resized()
{
		label.setBounds(0, 0, getWidth(), getHeight());
}

void Counter::run()
{
		while (! threadShouldExit())
		{
			 const MessageManagerLock lock (Thread::getCurrentThread());
			 
			 if (lock.lockWasGained()) {
				  counter++;
				  label.setText(String(counter), dontSendNotification);
			 }
		}
}

MainContentComponent::MainContentComponent()
: startThreadButton("Start Thread"),
  stopThreadButton("End Thread")
{
	 addAndMakeVisible(&startThreadButton);
	 addAndMakeVisible(&stopThreadButton);
	 addAndMakeVisible(counter1);
	 addAndMakeVisible(counter2);
	 
	 
	 counters.add(counter1);
	 counters.add(counter2);
	 
	 startThreadButton.addListener(this);
	 stopThreadButton.addListener(this);
	 
	 setSize(200, 130);

}

MainContentComponent::~MainContentComponent()
{

}

void MainContentComponent::resized()
{
	 startThreadButton.setBounds(10, 10, getWidth()-20, 20);
	 stopThreadButton.setBounds(10, 40, getWidth()-20, 20);
	 counter1->setBounds(10, 70, getWidth()-20, 20);
	 counter2->setBounds(10, 100, getWidth()-20, 20);
}

void MainContentComponent::buttonClicked(Button* button)
{
	 if (&startThreadButton == button) {
		  counter1->startThread();
		  counter2->startThread();
	 }
	 else if (&stopThreadButton == button) {
		  counter1->stopThread(3000);
		  counter2->stopThread(3000);
	 }
}

