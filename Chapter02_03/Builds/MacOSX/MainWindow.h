//
//  MainWindow.h
//  Chapter02_03
//
//  Created by ZhangJunhong on 14-10-15.
//
//

#ifndef __Chapter02_03__MainWindow__
#define __Chapter02_03__MainWindow__

#include <stdio.h>
#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

class Chapter02_03Application  : public JUCEApplication
{
public:
    Chapter02_03Application();
    
    const String getApplicationName();
    const String getApplicationVersion();
    bool moreThanOneInstanceAllowed();
    
    //==============================================================================
    void initialise (const String& commandLine);
    void shutdown();
    
    //==============================================================================
    void systemRequestedQuit();
    
    void anotherInstanceStarted (const String& commandLine);
    class MainWindow    : public DocumentWindow
    {
    public:
        MainWindow (String name);
        void closeButtonPressed();
    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
    };
private:
    ScopedPointer<MainWindow> mainWindow;
};

    
        
    
#endif /* defined(__Chapter02_03__MainWindow__) */
