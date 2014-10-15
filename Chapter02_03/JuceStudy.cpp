//
//  LipsdrumApplication.cpp
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-11.
//
//

#include "JuceStudy.h"
#include <pthread.h>
#include <thread>

void JuceStudyApplication::initialise (const String& commandLine)
{
	LookAndFeel& lnf = LookAndFeel::getDefaultLookAndFeel();
	lnf.setColour(Slider::thumbColourId, Colours::red);
	mainWindow = new MainWindow();
}


void JuceStudyApplication::shutdown()
{
	mainWindow = nullptr;
}

void JuceStudyApplication::systemRequestedQuit()
{
	quit();
}

void JuceStudyApplication::anotherInstanceStarted (const String& commandLine)
{
	// When another instance of the app is launched while this one is running,
    // this method is invoked, and the commandLine parameter tells you what
	// the other instance's command-line arguments were.
}
