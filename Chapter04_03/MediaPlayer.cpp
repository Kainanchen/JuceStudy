/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MediaPlayer.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MediaPlayer::MediaPlayer ()
{
    addAndMakeVisible (openButton = new TextButton ("open"));
    openButton->setButtonText (TRANS("Open..."));
    openButton->addListener (this);

    addAndMakeVisible (playButton = new TextButton ("new button"));
    playButton->setButtonText (TRANS("Play"));
    playButton->addListener (this);
    playButton->setColour (TextButton::buttonColourId, Colours::green);
    playButton->setColour (TextButton::buttonOnColourId, Colours::red);

    addAndMakeVisible (stopButton = new TextButton ("new button"));
    stopButton->setButtonText (TRANS("Stop"));
    stopButton->addListener (this);
    stopButton->setColour (TextButton::buttonColourId, Colours::red);

    addAndMakeVisible (settingsButton = new TextButton ("new button"));
    settingsButton->setButtonText (TRANS("Audio Settings..."));
    settingsButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	playButton -> setEnabled(false);
	stopButton -> setEnabled(false);
	
	formatManager.registerBasicFormats();
	sourcePlayer.setSource(&transportSource);
	deviceManager.addAudioCallback(&sourcePlayer);
	deviceManager.initialise(0, 2, nullptr, true);
	
	deviceManager.addChangeListener(this);
	transportSource.addChangeListener(this);
	state = Stopped;
	//[/Constructor]
}

MediaPlayer::~MediaPlayer()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    openButton = nullptr;
    playButton = nullptr;
    stopButton = nullptr;
    settingsButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MediaPlayer::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MediaPlayer::resized()
{
    openButton->setBounds (proportionOfWidth (0.0500f), proportionOfHeight(0.0500f), proportionOfWidth (0.9000f), proportionOfHeight (0.2000f));
    playButton->setBounds (proportionOfWidth (0.0500f), proportionOfHeight(0.2750f), proportionOfWidth (0.9000), proportionOfHeight (0.2000f));
    stopButton->setBounds (proportionOfWidth (0.0500f), proportionOfHeight(0.5000f), proportionOfWidth (0.9000f), proportionOfHeight (0.2000f));
    settingsButton->setBounds (proportionOfWidth (0.0500f), proportionOfHeight(0.7250f), proportionOfWidth (0.9000f), proportionOfHeight (0.2000f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MediaPlayer::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
		FileChooser chooser("Select a Wave file to play...", File::nonexistent,"*.wav");
		if (chooser.browseForFileToOpen()) {
			File file(chooser.getResult());
			readerSource = new AudioFormatReaderSource(formatManager.createReaderFor(file),true);
			transportSource.setSource(readerSource);
			playButton -> setEnabled(true);
		}
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..
		if ((Stopped==state)||(Paused==state)) {
			changeState(Starting);
		} else if (Playing==state) {
			changeState(Pausing);
		}
        //[/UserButtonCode_textButton2]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
		if (Paused==state) {
			changeState(Stopped);
		} else {
			changeState(Stopping);
		}
        //[/UserButtonCode_textButton3]
    }
    else if (buttonThatWasClicked == settingsButton)
    {
        //[UserButtonCode_settingsButton] -- add your button handler code here..
		bool showMidiInputOptions = false;
		bool showMidiOutputSelector = false;
		bool showChannelAsStereoPairs = true;
		bool hideAdvancedOptions = false;
		
		AudioDeviceSelectorComponent settings(deviceManager,
											  0,0,1,2,
											  showMidiInputOptions,
											  showMidiOutputSelector,
											  showChannelAsStereoPairs,
											  hideAdvancedOptions);
		settings.setSize(500,400);
		DialogWindow::showModalDialog(String("Audio Settings"), &settings, TopLevelWindow::getTopLevelWindow(0), Colours::white, true);
		
        //[/UserButtonCode_textButton4]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void MediaPlayer::changeListenerCallback(ChangeBroadcaster* src)
{
	if (&deviceManager==src) {
		AudioDeviceManager::AudioDeviceSetup setup;
		deviceManager.getAudioDeviceSetup(setup);
		
		if (setup.outputChannels.isZero()) {
			sourcePlayer.setSource(nullptr);
		} else {
			sourcePlayer.setSource(&transportSource);
		}
	} else if (&transportSource==src) {
		if (transportSource.isPlaying()) {
			changeState(Playing);
		} else {
			if ((Stopping==state)||(Playing==state)) {
				changeState(Stopped);
			} else if (Pausing==state) {
				changeState(Paused);
			}
		}
	}
}

void MediaPlayer::changeState(TransportState newState)
{
	if (state!=newState) {
		state = newState;
		switch (state) {
			case Stopped:
				playButton->setButtonText("Play");
				stopButton->setButtonText("Stop");
				stopButton->setEnabled(false);
				transportSource.setPosition(0.0);
				break;
			case Starting:
				transportSource.start();
				break;
			case Playing:
				playButton->setButtonText("Pause");
				stopButton->setButtonText("Stop");
				stopButton->setEnabled(true);
				break;
			case Pausing:
				transportSource.stop();
				break;
			case Paused:
				playButton->setButtonText("Resume");
				stopButton->setButtonText("Return to zero");
				break;
			case Stopping:
				transportSource.stop();
				break;
			default:
				break;
		}
	}
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MediaPlayer" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="open" id="550ec22c7d13313e" memberName="openButton" virtualName=""
              explicitFocusOrder="0" pos="5.072% 10 89.855% 5.091%" buttonText="Open..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3c586b09d8d49bd3" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="5.072% 40 89.855% 5.091%"
              bgColOff="ff008000" bgColOn="ffff0000" buttonText="Play" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cd4b08aaf5050534" memberName="textButton3"
              virtualName="" explicitFocusOrder="0" pos="5.072% 70 89.855% 5.091%"
              bgColOff="ffff0000" buttonText="Stop" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3be48af18faa03ad" memberName="textButton4"
              virtualName="" explicitFocusOrder="0" pos="5.072% 100 89.855% 5.091%"
              buttonText="Audio Settings..." connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
