//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
:	 slider1(Slider::LinearHorizontal,Slider::TextBoxLeft),
	 slider2(Slider::LinearHorizontal,Slider::TextBoxLeft),
	 toggle1("Slider style: Linear Bar")
{
	 setLookAndFeel(&altLookAndFeel);
	 toggle1.addListener(this);
	 
	 addAndMakeVisible(&slider1);
	 addAndMakeVisible(&slider2);
	 addAndMakeVisible(&toggle1);
	 
	 setSize(400, 100);
}

void MainContentComponent::resized()
{
	 slider1.setBounds(10,10,getWidth()-20,20);
	 slider2.setBounds(10,40,getWidth()-20,20);
	 toggle1.setBounds(10,70,getWidth()-20,20);
}

void MainContentComponent::buttonClicked(Button* button)
{
	 if (&toggle1==button) {
		  if (toggle1.getToggleState()) {
				slider1.setSliderStyle(Slider::LinearBar);
				slider2.setSliderStyle(Slider::LinearBar);
		  }
		  else {
				slider1.setSliderStyle(Slider::LinearHorizontal);
				slider2.setSliderStyle(Slider::LinearHorizontal);
		  }
	 }
}



