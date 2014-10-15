/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "JuceStudy.h"


// This macro generates the main() routine that launches the app.
// START_JUCE_APPLICATION (JuceStudyApplication)


/* Measure time
int main(int argc, char* argv[])
{
	Logger* log = Logger::getCurrentLogger();
	uint32 now = Time::getMillisecondCounter();
	uint32 trigger = now + 5000;
	
	log->writeToLog("the time is now: " + String (now) + "ms");
	
	while (Time::getMillisecondCounter()<trigger) {
		Thread::sleep(10);
		log->writeToLog ("waiting...");
	}
	
	log->writeToLog ("the time has reached: " + String (trigger) + "ms");
	
	return 0;
}
*/

int main (int argc, char* argv[])
{
	Logger *log = Logger::getCurrentLogger();
	double start = Time::getMillisecondCounterHiRes();
	log->writeToLog ("the time is now: " +
					 String (start) + "ms");
	float value = 0.f;
	const int N = 10000;
	for (int i = 0; i < N; ++i)
		value += 0.1f;
	double duration = Time::getMillisecondCounterHiRes() - start;
	log->writeToLog ("the time taken to perform " + String (N) +
					 " additions was: " + String (duration) + "ms");
	return 0;
}


/*
int main (int argc, char* argv[])
{
	Logger *log = Logger::getCurrentLogger();
	Time time (Time::getCurrentTime());
	RelativeTime oneHour = RelativeTime::hours(1);
	bool includeDate = true;
	bool includeTime = true;
	bool includeSeconds = true;
	bool use24HourClock = true;
	String timeStr ((time+oneHour).toString (includeDate, includeTime,
								   includeSeconds, use24HourClock));
	log->writeToLog ("the time in an hour is: " + timeStr);
	return 0;
}
*/