//
//  MainWindow.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-11.
//
//

#include "MainWindow.h"

void MainWindow::closeButtonPressed()
{
	// This is called when the user tries to close this window. Here, we'll just
	// ask the app to quit when this happens, but you can change this to do
	// whatever you need.
	JUCEApplication::getInstance()->systemRequestedQuit();
}

MainWindow::MainWindow()  : DocumentWindow ("MultiThread",
								 Colours::lightgrey,
								 DocumentWindow::allButtons)
{
	setContentOwned (new MainContentComponent(), true);	
	centreWithSize (getWidth(), getHeight());
	setVisible (true);
}