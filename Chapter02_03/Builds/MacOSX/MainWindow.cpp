//
//  MainWindow.cpp
//  Chapter02_03
//
//  Created by ZhangJunhong on 14-10-15.
//
//

#include "MainWindow.h"
Chapter02_03Application::MainWindow::MainWindow (String name)
:DocumentWindow (name,
                                            Colours::lightgrey,
                                            DocumentWindow::allButtons)
{
    setUsingNativeTitleBar (true);
    setContentOwned (new MainContentComponent(), true);
    
    centreWithSize (getWidth(), getHeight());
    setVisible (true);
}

const String getApplicationName() override       { return ProjectInfo::projectName; }
const String getApplicationVersion() override    { return ProjectInfo::versionString; }
bool moreThanOneInstanceAllowed() override       { return true; }

//==============================================================================
void initialise (const String& commandLine) override
{
    // This method is where you should put your application's initialisation code..
    
    mainWindow = new MainWindow (getApplicationName());
}

void shutdown() override
{
    // Add your application's shutdown code here..
    
    mainWindow = nullptr; // (deletes our window)
}

//==============================================================================
void systemRequestedQuit() override
{
    // This is called when the app is being asked to quit: you can ignore this
    // request and let the app carry on running, or call quit() to allow the app to close.
    quit();
}

void anotherInstanceStarted (const String& commandLine) override
{
    // When another instance of the app is launched while this one is running,
    // this method is invoked, and the commandLine parameter tells you what
    // the other instance's command-line arguments were.
}
START_JUCE_APPLICATION (Chapter02_03Application)
