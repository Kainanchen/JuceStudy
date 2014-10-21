/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include <iostream>

//==============================================================================
MainContentComponent::MainContentComponent()
{
    
    for (int i=0; i<10; ++i) {
        
        String buttonName;
        buttonName<<"Button"<<String(i);
        TextButton* button = new TextButton(buttonName);
        button->addListener(this);
        buttons.add(button);
        addAndMakeVisible(button);
    }
    Logger *log= Logger::getCurrentLogger();
    log->writeToLog(String(buttons.size()));
    addAndMakeVisible(&label);
    label.setJustificationType(Justification::centred);
    label.setText("no buttons clicked", dontSendNotification);
    setSize (500, 400);
}



void MainContentComponent::resized()
{
    
    Rectangle<int> rect(10,10,getWidth()/2-20,getHeight()-20);
    Logger *log= Logger::getCurrentLogger();
    log->writeToLog(String(buttons.size()));
    int buttonHeight=rect.getHeight()/buttons.size();
    for (int i=0; i<buttons.size(); ++i) {
        buttons[i]->setBounds(rect.getX(), i*buttonHeight+rect.getY(), rect.getWidth(), buttonHeight);
    
    }
    label.setBounds(rect.getRight(), rect.getY(), getWidth()-rect.getWidth()-10, 20);
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::buttonClicked(Button* button){
    String labelText;
    int buttonIndex = buttons. indexOf(button);
    labelText <<"Button clicked:"<<String (buttonIndex);
    label.setText(labelText, dontSendNotification);
}