//
//  MainWindow.h
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-11.
//
//

#ifndef __JuceStudy__MainWindow__
#define __JuceStudy__MainWindow__

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

#endif /* defined(__JuceStudy__MainWindow__) */

class MainWindow    : public DocumentWindow
{
public:
	MainWindow();
	void closeButtonPressed();
	
private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};