//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
{
	 addAndMakeVisible(&form);
	 setSize(form.getWidth(), form.getHeight());
}

void MainContentComponent::resized()
{
	 form.setBounds(0, 0, getWidth(), getHeight());
}


