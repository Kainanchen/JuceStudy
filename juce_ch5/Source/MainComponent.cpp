//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"
//////


MainContentComponent::MainContentComponent()
: startThreadButton("Start Thread"),
stopThreadButton("End Thread")
{
    addAndMakeVisible(&startThreadButton);
    addAndMakeVisible(&stopThreadButton);
    addAndMakeVisible(&label1);
    addAndMakeVisible(&label2);
    
    counters.add(counter1);
    counters.add(counter2);
    
    startThreadButton.addListener(this);
    stopThreadButton.addListener(this);
    
    //label1.getTextValue().referTo(counter1->counter);
    //label2.getTextValue().referTo(counter2->getCounterValue());
    setSize(200, 130);
}

MainContentComponent::~MainContentComponent()
{
    
}

void MainContentComponent::resized()
{
    startThreadButton.setBounds(10, 10, getWidth()-20, 20);
    stopThreadButton.setBounds(10, 40, getWidth()-20, 20);
    label1.setBounds(10, 70, getWidth()-20, 20);
    label1.setBounds(10, 100, getWidth()-20, 20);
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

