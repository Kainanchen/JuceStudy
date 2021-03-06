//
//  LipsdrumApplication.h
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-11.
//
//

#ifndef __JuceStudy__JuceStudyApplication__
#define __JuceStudy__JuceStudyApplication__

#include <iostream>
#include "../JuceLibraryCode/JuceHeader.h"
#include "MainWindow.h"

#endif /* defined(__Lipsdrum__LipsdrumApplication__) */

class JuceStudyApplication  : public JUCEApplication
{
public:
    //==============================================================================
    JuceStudyApplication(){};
	
    const String getApplicationName() override       { return ProjectInfo::projectName; }
    const String getApplicationVersion() override    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override       { return true; }

    //==============================================================================
	
    void initialise (const String& commandLine) override;
    void shutdown() override;
    void systemRequestedQuit() override;
	void anotherInstanceStarted (const String& commandLine) override;
    
private:
    ScopedPointer<MainWindow> mainWindow;
};