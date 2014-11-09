//
//  MainComponent.h
//  Lipsdrum
//
//  Created by Ken Chen on 14-8-19.
//
//

#ifndef __Lipsdrum__MainComponent__
#define __Lipsdrum__MainComponent__

#include "../JuceLibraryCode/JuceHeader.h"

class Counter : public Thread
{
public:
    Counter() : Thread ("Juce Demo Thread"), counter(0)
    {}
    
    ~Counter()
    {
        stopThread (3000);
    }
    
    void run()
    {
        while (! threadShouldExit())
        {
            const MessageManagerLock lock (Thread::getCurrentThread());
            
            if (lock.lockWasGained()){}  // if something is trying to kill this job, the lock
            //counter.setValue(int(counter.getValue()) + 1);                 // will fail, in which case we'd better
        }
    }
    
    int getCounterValue()
    {
        return counter;
    }
    
private:
    int counter;
};

class MainContentComponent : public Component,
public Button::Listener
{
    
public:
    MainContentComponent();
    ~MainContentComponent();
    
    void resized();
    void buttonClicked(Button* button);
    
private:
    TextButton startThreadButton;
    TextButton stopThreadButton;
    
    Counter *counter1 = new Counter();
    Counter *counter2 = new Counter();
    OwnedArray<Counter> counters;
    Label label1;
    Label label2;
    
};



#endif /* defined(__Lipsdrum__MainComponent__) */
