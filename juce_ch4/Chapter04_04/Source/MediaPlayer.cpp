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
    addAndMakeVisible (playButton = new TextButton ("Play"));
    playButton->addListener (this);
    playButton->setColour (TextButton::buttonColourId, Colours::chartreuse);

    addAndMakeVisible (stopButton = new TextButton ("Stop"));
    stopButton->addListener (this);
    stopButton->setColour (TextButton::buttonColourId, Colours::red);

    addAndMakeVisible (openButton = new TextButton ("Open Files"));
    openButton->setButtonText (TRANS("Open..."));
    openButton->addListener (this);

    addAndMakeVisible (settingButton = new TextButton ("Configure audio"));
    settingButton->setButtonText (TRANS("Audio Settings..."));
    settingButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MediaPlayer::~MediaPlayer()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    playButton = nullptr;
    stopButton = nullptr;
    openButton = nullptr;
    settingButton = nullptr;


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
    playButton->setBounds (-40, 32, getWidth() - -74, 24);
    stopButton->setBounds (-40, 64, getWidth() - -74, 24);
    openButton->setBounds (-40, 0, getWidth() - -74, 24);
    settingButton->setBounds (-40, 96, getWidth() - -74, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MediaPlayer::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..
        //[/UserButtonCode_playButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == settingButton)
    {
        //[UserButtonCode_settingButton] -- add your button handler code here..
        //[/UserButtonCode_settingButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
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
  <TEXTBUTTON name="Play" id="29bf7dc4c9a485f0" memberName="playButton" virtualName=""
              explicitFocusOrder="0" pos="-40 32 -74M 24" bgColOff="ff7fff00"
              buttonText="Play" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Stop" id="813be0993bfb2f7b" memberName="stopButton" virtualName=""
              explicitFocusOrder="0" pos="-40 64 -74M 24" bgColOff="ffff0000"
              buttonText="Stop" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Open Files" id="1746fc4fd3a1573f" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="-40 0 -74M 24" buttonText="Open..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Configure audio" id="da5b9499212ed60d" memberName="settingButton"
              virtualName="" explicitFocusOrder="0" pos="-40 96 -74M 24" buttonText="Audio Settings..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
