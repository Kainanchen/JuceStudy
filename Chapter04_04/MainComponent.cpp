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
	 addAndMakeVisible(&embeddedImage);
	 setSize(embeddedImage.getWidth(), embeddedImage.getHeight());
}

void MainContentComponent::resized()
{
	 embeddedImage.setBounds(0, 0, getWidth(), getHeight());
}




