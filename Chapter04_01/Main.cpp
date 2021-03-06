/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "JuceStudy.h"


// This macro generates the main() routine that launches the app.
// START_JUCE_APPLICATION (JuceStudyApplication)

void writeFile(File const& file);
void readFile(File const& file);

int main(int argc, char* argv[])
{
	File file(File::getSpecialLocation(File::currentExecutableFile)
			  .getParentDirectory()
			  .getChildFile("Chapter03_03_test.txt"));
	writeFile(file);
	readFile(file);
	return 0;
}

void writeFile(File const& file)
{
	Logger *log = Logger::getCurrentLogger();
	FileOutputStream stream(file);
	if (!stream.openedOk()) {
		log -> writeToLog("failed to open stream");
		return;
	}
	stream.setPosition(0);
	stream.truncate();
	
	String text("The quick brown fox jumps over the lazy dog.");
	
	bool asUTF16 = false;
	bool byteOrderMark = false;
	stream.writeText(text, asUTF16, byteOrderMark);
	stream.writeInt(1234);
	stream.writeFloat(3.142);
	stream.writeDouble(0.000000001);
}

void readFile(File const& file)
{
	Logger* log = Logger::getCurrentLogger();
	FileInputStream stream(file);
	
	if (!stream.openedOk()) {
		log -> writeToLog("failed to open stream");
		return;
	}
	
	log -> writeToLog("fileText: " + stream.readEntireStreamAsString());
	log -> writeToLog("readInt: " + String(stream.readInt()));
	log -> writeToLog("readFloat: " + String(stream.readFloat()));
	log -> writeToLog("readDouble: " + String(stream.readDouble()));
}