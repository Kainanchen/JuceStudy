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
	 for (int i=0; i<10; ++i) {
		  String buttonName;
		  buttonName << "Button " << String(i);
		  TextButton* button = new TextButton(buttonName);
		  button->addListener(this);
		  buttons.add(button);
		  addAndMakeVisible(button);
	 }
	 
	 addAndMakeVisible(&label);
	 label.setJustificationType(Justification::centred);
	 label.setText("no button clicked", dontSendNotification);
	 
	 setSize(500, 400);

}

void MainContentComponent::resized()
{
	 Rectangle<int> rect(10,10,getWidth()/2-20,getHeight()-20);
	 int buttonHeight = rect.getHeight()/buttons.size();
	 for (int i=0; i<buttons.size(); ++i) {
		  buttons[i] -> setBounds(rect.getX(), i*buttonHeight + rect.getY(), rect.getWidth(), buttonHeight);
	 }
	 label.setBounds(rect.getRight(), rect.getY(), getWidth()-rect.getWidth() - 10, 20);
}

void MainContentComponent::buttonClicked(Button* button)
{
	 String labelText;
	 int buttonIndex = buttons.indexOf(button);
	 labelText << "Button clicked: " << String(buttonIndex);
	 label.setText(labelText, dontSendNotification);
}


