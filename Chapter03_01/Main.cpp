/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "JuceStudy.h"


// This macro generates the main() routine that launches the app.
// START_JUCE_APPLICATION (JuceStudyApplication)

int main (int argc, char* argv[])
{
	Logger *log = Logger::getCurrentLogger();
	String string1 ("Hello");
	String string2 = string1;
	string1 << " world!";
	log->writeToLog ("string1: " + string1);
	log->writeToLog ("string2: " + string2);
	String intString (1234); // string will be "1234"
	String floatString (1.25f); // string will be "1.25"
	String doubleString (2.5); // string will be "2.5"
	log->writeToLog(intString<<floatString<<doubleString);
	
	return 0;
}