//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
:	 button1("Click"),
	 label1("label1","Info")
{
	 slider1.setRange(0.0, 100.0);
	 addAndMakeVisible(&button1);
	 addAndMakeVisible(&label1);
	 addAndMakeVisible(&slider1);
	 setSize(200,100);
}

void MainContentComponent::resized()
{
	 button1.setBoundsRelative(0.05, 0.05, 0.90, 0.25);
	 slider1.setBoundsRelative(0.05, 0.35, 0.90, 0.25);
	 label1.setBoundsRelative(0.05, 0.65, 0.90, 0.25);
}




