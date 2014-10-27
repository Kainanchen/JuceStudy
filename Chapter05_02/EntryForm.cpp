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

#include "EntryForm.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
void EntryForm::valueTreePropertyChanged(ValueTree& tree, const Identifier& property)
{
	if (property==firstNameId) {
		firstNameField->setText(tree.getProperty(property), dontSendNotification);
	} else if (property==lastNameId) {
		lastNameField->setText(tree.getProperty(property), dontSendNotification);
	} else if (property==ageId) {
		ageField->setText(tree.getProperty(property), dontSendNotification);
	} else if (property==line1Id) {
		line1Field->setText(tree.getProperty(property), dontSendNotification);
	} else if (property==line2Id) {
		line2Field->setText(tree.getProperty(property), dontSendNotification);
	} else if (property==line3Id) {
		line3Field->setText(tree.getProperty(property), dontSendNotification);
	}
}
//[/MiscUserDefs]

//==============================================================================
EntryForm::EntryForm ()
{
    addAndMakeVisible (address = new GroupComponent ("address",
                                                     TRANS("Address")));

    addAndMakeVisible (Line1 = new Label ("Line1",
                                          TRANS("Line 1")));
    Line1->setFont (Font (15.00f, Font::plain));
    Line1->setJustificationType (Justification::centredLeft);
    Line1->setEditable (false, false, false);
    Line1->setColour (TextEditor::textColourId, Colours::black);
    Line1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Line3 = new Label ("Line3",
                                          TRANS("Line 3")));
    Line3->setFont (Font (15.00f, Font::plain));
    Line3->setJustificationType (Justification::centredLeft);
    Line3->setEditable (false, false, false);
    Line3->setColour (TextEditor::textColourId, Colours::black);
    Line3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Age = new Label ("Age",
                                        TRANS("Age")));
    Age->setFont (Font (15.00f, Font::plain));
    Age->setJustificationType (Justification::centredLeft);
    Age->setEditable (false, false, false);
    Age->setColour (TextEditor::textColourId, Colours::black);
    Age->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Line2 = new Label ("Line2",
                                          TRANS("Line 2")));
    Line2->setFont (Font (15.00f, Font::plain));
    Line2->setJustificationType (Justification::centredLeft);
    Line2->setEditable (false, false, false);
    Line2->setColour (TextEditor::textColourId, Colours::black);
    Line2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LastName = new Label ("LastName",
                                             TRANS("Last Name")));
    LastName->setFont (Font (15.00f, Font::plain));
    LastName->setJustificationType (Justification::centredLeft);
    LastName->setEditable (false, false, false);
    LastName->setColour (TextEditor::textColourId, Colours::black);
    LastName->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (FirstName = new Label ("FirstName",
                                              TRANS("First Name")));
    FirstName->setFont (Font (15.00f, Font::plain));
    FirstName->setJustificationType (Justification::centredLeft);
    FirstName->setEditable (false, false, false);
    FirstName->setColour (TextEditor::textColourId, Colours::black);
    FirstName->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (firstNameField = new Label ("firstNameField",
                                                   String::empty));
    firstNameField->setFont (Font (15.00f, Font::plain));
    firstNameField->setJustificationType (Justification::centredLeft);
    firstNameField->setEditable (true, true, false);
    firstNameField->setColour (Label::backgroundColourId, Colours::white);
    firstNameField->setColour (TextEditor::textColourId, Colours::black);
    firstNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    firstNameField->addListener (this);

    addAndMakeVisible (line3Field = new Label ("line3Field",
                                               String::empty));
    line3Field->setFont (Font (15.00f, Font::plain));
    line3Field->setJustificationType (Justification::centredLeft);
    line3Field->setEditable (true, true, false);
    line3Field->setColour (Label::backgroundColourId, Colours::white);
    line3Field->setColour (TextEditor::textColourId, Colours::black);
    line3Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line3Field->addListener (this);

    addAndMakeVisible (line2Field = new Label ("line2Field",
                                               String::empty));
    line2Field->setFont (Font (15.00f, Font::plain));
    line2Field->setJustificationType (Justification::centredLeft);
    line2Field->setEditable (true, true, false);
    line2Field->setColour (Label::backgroundColourId, Colours::white);
    line2Field->setColour (TextEditor::textColourId, Colours::black);
    line2Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line2Field->addListener (this);

    addAndMakeVisible (line1Field = new Label ("line1Field",
                                               String::empty));
    line1Field->setFont (Font (15.00f, Font::plain));
    line1Field->setJustificationType (Justification::centredLeft);
    line1Field->setEditable (true, true, false);
    line1Field->setColour (Label::backgroundColourId, Colours::white);
    line1Field->setColour (TextEditor::textColourId, Colours::black);
    line1Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line1Field->addListener (this);

    addAndMakeVisible (lastNameField = new Label ("lastNameField",
                                                  String::empty));
    lastNameField->setFont (Font (15.00f, Font::plain));
    lastNameField->setJustificationType (Justification::centredLeft);
    lastNameField->setEditable (true, true, false);
    lastNameField->setColour (Label::backgroundColourId, Colours::white);
    lastNameField->setColour (TextEditor::textColourId, Colours::black);
    lastNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    lastNameField->addListener (this);

    addAndMakeVisible (ageField = new Label ("ageField",
                                             String::empty));
    ageField->setFont (Font (15.00f, Font::plain));
    ageField->setJustificationType (Justification::centredLeft);
    ageField->setEditable (true, true, false);
    ageField->setColour (Label::backgroundColourId, Colours::white);
    ageField->setColour (TextEditor::textColourId, Colours::black);
    ageField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    ageField->addListener (this);

    addAndMakeVisible (undoButton = new TextButton ("undoButton"));
    undoButton->setButtonText (TRANS("Undo"));
    undoButton->addListener (this);

    addAndMakeVisible (openButton = new TextButton ("openButton"));
    openButton->setButtonText (TRANS("Open..."));
    openButton->addListener (this);

    addAndMakeVisible (saveButton = new TextButton ("saveButton"));
    saveButton->setButtonText (TRANS("Save..."));
    saveButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 500);


    //[Constructor] You can add your own custom stuff here..
	personData = ValueTree(personId);
	personData.setProperty(firstNameId, String::empty, nullptr);
	personData.setProperty(lastNameId, String::empty, nullptr);
	personData.setProperty(ageId, String::empty, nullptr);
	ValueTree addressData = ValueTree(addressId);
	addressData.setProperty(line1Id, String::empty, nullptr);
	addressData.setProperty(line2Id, String::empty, nullptr);
	addressData.setProperty(line3Id, String::empty, nullptr);
	personData.addChild(addressData, -1, nullptr);
	
	personData.addListener(this);
    //[/Constructor]
}

EntryForm::~EntryForm()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    address = nullptr;
    Line1 = nullptr;
    Line3 = nullptr;
    Age = nullptr;
    Line2 = nullptr;
    LastName = nullptr;
    FirstName = nullptr;
    firstNameField = nullptr;
    line3Field = nullptr;
    line2Field = nullptr;
    line1Field = nullptr;
    lastNameField = nullptr;
    ageField = nullptr;
    undoButton = nullptr;
    openButton = nullptr;
    saveButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EntryForm::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void EntryForm::resized()
{
	address->setBounds (proportionOfWidth (0.0500f), proportionOfHeight (0.4300f), proportionOfWidth (0.9000f), proportionOfHeight (0.4300f));
	Line1->setBounds (proportionOfWidth (0.1500f), proportionOfHeight (0.5300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	Line3->setBounds (proportionOfWidth (0.1500f), proportionOfHeight (0.7300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	Age->setBounds (proportionOfWidth (0.1000f), proportionOfHeight (0.3300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	Line2->setBounds (proportionOfWidth (0.1500f), proportionOfHeight (0.6300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	LastName->setBounds (proportionOfWidth (0.1000f), proportionOfHeight (0.2300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	FirstName->setBounds (proportionOfWidth (0.1000f), proportionOfHeight (0.1300f), proportionOfWidth (0.2500f), proportionOfHeight (0.0500f));
	firstNameField->setBounds (proportionOfWidth (0.3000f), proportionOfHeight (0.1300f), proportionOfWidth (0.5000f), proportionOfHeight (0.0500f));
	line3Field->setBounds (proportionOfWidth (0.3500f), proportionOfHeight (0.7300f), proportionOfWidth (0.4000f), proportionOfHeight (0.0500f));
	line2Field->setBounds (proportionOfWidth (0.3500f), proportionOfHeight (0.6300f), proportionOfWidth (0.4000f), proportionOfHeight (0.0500f));
	line1Field->setBounds (proportionOfWidth (0.3500f), proportionOfHeight (0.5300f), proportionOfWidth (0.4000f), proportionOfHeight (0.0500f));
	lastNameField->setBounds (proportionOfWidth (0.3000f), proportionOfHeight (0.2300f), proportionOfWidth (0.5000f), proportionOfHeight (0.0500f));
	ageField->setBounds (proportionOfWidth (0.3000f), proportionOfHeight (0.3300f), proportionOfWidth (0.5000f), proportionOfHeight (0.0500f));
    undoButton->setBounds (proportionOfWidth (0.6700f), proportionOfHeight (0.9000f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    openButton->setBounds (proportionOfWidth (0.3750f), proportionOfHeight (0.9000f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    saveButton->setBounds (proportionOfWidth (0.0800f), proportionOfHeight (0.9000f), proportionOfWidth (0.2500f), proportionOfHeight (0.0600f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void EntryForm::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
	undoManager.beginNewTransaction();
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == firstNameField)
    {
        //[UserLabelCode_firstNameField] -- add your label text handling code here..
		personData.setProperty(firstNameId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_firstNameField]
    }
    else if (labelThatHasChanged == line3Field)
    {
        //[UserLabelCode_line3Field] -- add your label text handling code here..
		ValueTree addressData(personData.getChildWithName(addressId));
		addressData.setProperty(line3Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line3Field]
    }
    else if (labelThatHasChanged == line2Field)
    {
        //[UserLabelCode_line2Field] -- add your label text handling code here..
		ValueTree addressData(personData.getChildWithName(addressId));
		addressData.setProperty(line2Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line2Field]
    }
    else if (labelThatHasChanged == line1Field)
    {
        //[UserLabelCode_line1Field] -- add your label text handling code here..
		ValueTree addressData(personData.getChildWithName(addressId));
		addressData.setProperty(line1Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line1Field]
    }
    else if (labelThatHasChanged == lastNameField)
    {
        //[UserLabelCode_lastNameField] -- add your label text handling code here..
		personData.setProperty(lastNameId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_lastNameField]
    }
    else if (labelThatHasChanged == ageField)
    {
        //[UserLabelCode_ageField] -- add your label text handling code here..
		personData.setProperty(ageId, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_ageField]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void EntryForm::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == undoButton)
    {
        //[UserButtonCode_undoButton] -- add your button handler code here..
		undoManager.undo();
        //[/UserButtonCode_undoButton]
    }
    else if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
		FileChooser chooser("Open person data", File::nonexistent, "*.xml");
		if (chooser.browseForFileToOpen()) {
			Logger* log = Logger::getCurrentLogger();
			File file(chooser.getResult());
			
			XmlDocument xmlDoc(file);
			ScopedPointer<XmlElement> xml = xmlDoc.getDocumentElement();
			
			if (xml==nullptr) {
				log->writeToLog("XML error");
				return;
			}
			
			ValueTree newPerson(ValueTree::fromXml(*xml));
			
			if (newPerson.getType()!=personId) {
				log->writeToLog("Invalid person XML");
				return;
			}
			
			undoManager.beginNewTransaction();
			personData.copyPropertiesFrom(newPerson, &undoManager);
			
			ValueTree newAddress(newPerson.getChildWithName(addressId));
			ValueTree addressData(personData.getChildWithName(addressId));
			addressData.copyPropertiesFrom(newAddress, &undoManager);
		}
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveButton)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
		FileChooser chooser("Save person data", File::nonexistent, "*.xml");
		if (chooser.browseForFileToSave(true)) {
			File file(chooser.getResult());
			
			if (file.existsAsFile()) {
				file.moveToTrash();
			}
			
			FileOutputStream stream(file);
			
			ScopedPointer<XmlElement> xml = personData.createXml();
			xml->writeToStream(stream, String::empty);
		}
        //[/UserButtonCode_saveButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
const Identifier EntryForm::personId = "person";
const Identifier EntryForm::firstNameId = "firstName";
const Identifier EntryForm::lastNameId = "lastName";
const Identifier EntryForm::ageId = "age";
const Identifier EntryForm::addressId = "address";
const Identifier EntryForm::line1Id = "line1";
const Identifier EntryForm::line2Id = "line2";
const Identifier EntryForm::line3Id = "line3";

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="EntryForm" componentName=""
                 parentClasses="public Component, public ValueTree::Listener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="800"
                 initialHeight="500">
  <BACKGROUND backgroundColour="ff808080"/>
  <GROUPCOMPONENT name="address" id="cc7822605495b901" memberName="address" virtualName=""
                  explicitFocusOrder="0" pos="4.948% 42.979% 90.052% 42.979%" title="Address"/>
  <LABEL name="Line1" id="fbdb4a6bb6a26004" memberName="Line1" virtualName=""
         explicitFocusOrder="0" pos="15.052% 53.036% 25% 4.934%" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="Line3" id="35276593ab4ceb53" memberName="Line3" virtualName=""
         explicitFocusOrder="0" pos="15.052% 72.865% 25% 4.934%" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="Age" id="440cc1d3c7a8b9c5" memberName="Age" virtualName=""
         explicitFocusOrder="0" pos="9.948% 32.922% 25% 4.934%" edTextCol="ff000000"
         edBkgCol="0" labelText="Age" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="Line2" id="6bc4298f29ead92" memberName="Line2" virtualName=""
         explicitFocusOrder="0" pos="15.052% 63.093% 25% 4.934%" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="LastName" id="f8cb786e7cce72bf" memberName="LastName" virtualName=""
         explicitFocusOrder="0" pos="9.948% 22.865% 25% 4.934%" edTextCol="ff000000"
         edBkgCol="0" labelText="Last Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="FirstName" id="6ddd0bb6e011a5c3" memberName="FirstName"
         virtualName="" explicitFocusOrder="0" pos="9.948% 13.093% 25% 4.934%"
         edTextCol="ff000000" edBkgCol="0" labelText="First Name" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="firstNameField" id="85e306bd8f43fbee" memberName="firstNameField"
         virtualName="" explicitFocusOrder="0" pos="29.948% 13.093% 50% 4.934%"
         bkgCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line3Field" id="eb8a400b08d48d15" memberName="line3Field"
         virtualName="" explicitFocusOrder="0" pos="34.948% 72.865% 40.052% 4.934%"
         bkgCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line2Field" id="e0dad2e4b49213b8" memberName="line2Field"
         virtualName="" explicitFocusOrder="0" pos="34.948% 63.093% 40.052% 4.934%"
         bkgCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line1Field" id="b13ebf6cff780c6a" memberName="line1Field"
         virtualName="" explicitFocusOrder="0" pos="34.948% 53.036% 40.052% 4.934%"
         bkgCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lastNameField" id="ecda81d3c360132d" memberName="lastNameField"
         virtualName="" explicitFocusOrder="0" pos="29.948% 22.865% 50% 4.934%"
         bkgCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText=""
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="ageField" id="469341a5d799823a" memberName="ageField" virtualName=""
         explicitFocusOrder="0" pos="29.948% 32.922% 50% 4.934%" bkgCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="undoButton" id="fea1ae85bf1210e6" memberName="undoButton"
              virtualName="" explicitFocusOrder="0" pos="67.031% 89.943% 25% 6.072%"
              buttonText="Undo" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="openButton" id="7616f090a810cd19" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="37.396% 89.943% 25% 6.072%"
              buttonText="Open..." connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="saveButton" id="50dfa0c92293b58b" memberName="saveButton"
              virtualName="" explicitFocusOrder="0" pos="7.969% 89.943% 25% 6.072%"
              buttonText="Save..." connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
