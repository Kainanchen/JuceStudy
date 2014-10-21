/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
int main (int argc, char* argv[])
{
    Logger *log = Logger::getCurrentLogger();
    StringArray strings;
    bool preserveQuoted= true;
    strings.addTokens("one two three four five six", preserveQuoted);
    for (int i=0; i<strings.size(); ++i) {
        log->writeToLog("strings["+String(i)+"]="+strings[i]);
    }


    return 0;
}
