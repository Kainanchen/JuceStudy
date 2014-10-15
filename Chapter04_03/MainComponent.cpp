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
	 addAndMakeVisible(&player);
	 setSize(player.getWidth(), player.getHeight());
}

void MainContentComponent::resized()
{
	 player.setBounds(0, 0, getWidth(), getHeight());
}





