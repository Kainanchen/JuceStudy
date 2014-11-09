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
//[/MiscUserDefs]

//==============================================================================
EntryForm::EntryForm ()
{
    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("First name")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Last name")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Age")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Line 1")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Line 2")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Line 3")));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (firstNameField = new Label ("firstNameField",
                                                   String::empty));
    firstNameField->setFont (Font (15.00f, Font::plain));
    firstNameField->setJustificationType (Justification::centredLeft);
    firstNameField->setEditable (true, true, false);
    firstNameField->setColour (Label::backgroundColourId, Colours::azure);
    firstNameField->setColour (TextEditor::textColourId, Colours::black);
    firstNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    firstNameField->addListener (this);

    addAndMakeVisible (lastNameField = new Label ("lastNameField",
                                                  String::empty));
    lastNameField->setFont (Font (15.00f, Font::plain));
    lastNameField->setJustificationType (Justification::centredLeft);
    lastNameField->setEditable (true, true, false);
    lastNameField->setColour (Label::backgroundColourId, Colours::azure);
    lastNameField->setColour (TextEditor::textColourId, Colours::black);
    lastNameField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    lastNameField->addListener (this);

    addAndMakeVisible (ageField = new Label ("ageField",
                                             String::empty));
    ageField->setFont (Font (15.00f, Font::plain));
    ageField->setJustificationType (Justification::centredLeft);
    ageField->setEditable (true, true, false);
    ageField->setColour (Label::backgroundColourId, Colours::azure);
    ageField->setColour (TextEditor::textColourId, Colours::black);
    ageField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    ageField->addListener (this);

    addAndMakeVisible (line1Field = new Label ("line1Field",
                                               String::empty));
    line1Field->setFont (Font (15.00f, Font::plain));
    line1Field->setJustificationType (Justification::centredLeft);
    line1Field->setEditable (true, true, false);
    line1Field->setColour (Label::backgroundColourId, Colours::azure);
    line1Field->setColour (TextEditor::textColourId, Colours::black);
    line1Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line1Field->addListener (this);

    addAndMakeVisible (line2Field = new Label ("line2Field",
                                               String::empty));
    line2Field->setFont (Font (15.00f, Font::plain));
    line2Field->setJustificationType (Justification::centredLeft);
    line2Field->setEditable (true, true, false);
    line2Field->setColour (Label::backgroundColourId, Colours::azure);
    line2Field->setColour (TextEditor::textColourId, Colours::black);
    line2Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line2Field->addListener (this);

    addAndMakeVisible (line3Field = new Label ("line3Field",
                                               String::empty));
    line3Field->setFont (Font (15.00f, Font::plain));
    line3Field->setJustificationType (Justification::centredLeft);
    line3Field->setEditable (true, true, false);
    line3Field->setColour (Label::backgroundColourId, Colours::azure);
    line3Field->setColour (TextEditor::textColourId, Colours::black);
    line3Field->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    line3Field->addListener (this);

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Address")));

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

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    personData = ValueTree (personId);
    personData.setProperty(firstNameId, String::empty, nullptr);
    personData.setProperty(lastNameId, String::empty, nullptr);
    personData.setProperty(ageId, String::empty, nullptr);
    ValueTree addressData = ValueTree (addressId);
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

    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    firstNameField = nullptr;
    lastNameField = nullptr;
    ageField = nullptr;
    line1Field = nullptr;
    line2Field = nullptr;
    line3Field = nullptr;
    groupComponent = nullptr;
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
    label->setBounds (0, 0, 150, 24);
    label2->setBounds (0, 24, 150, 24);
    label3->setBounds (0, 48, 150, 24);
    label4->setBounds (0, 80, 150, 24);
    label5->setBounds (0, 104, 150, 24);
    label6->setBounds (0, 128, 150, 24);
    firstNameField->setBounds (168, 0, 150, 22);
    lastNameField->setBounds (168, 24, 150, 22);
    ageField->setBounds (168, 48, 150, 22);
    line1Field->setBounds (168, 80, 150, 22);
    line2Field->setBounds (168, 104, 150, 22);
    line3Field->setBounds (168, 128, 150, 22);
    groupComponent->setBounds (0, 65, 328, 104);
    undoButton->setBounds (344, 72, 150, 24);
    openButton->setBounds (344, 104, 150, 24);
    saveButton->setBounds (344, 136, 150, 24);
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
    else if (labelThatHasChanged == line1Field)
    {
        //[UserLabelCode_line1Field] -- add your label text handling code here..
        ValueTree addressData (personData.getChildWithName(addressId));
        addressData.setProperty(line1Id, labelThatHasChanged->getText(), &undoManager);

        //[/UserLabelCode_line1Field]
    }
    else if (labelThatHasChanged == line2Field)
    {
        //[UserLabelCode_line2Field] -- add your label text handling code here..
        ValueTree addressData (personData.getChildWithName(addressId));
        addressData.setProperty(line2Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line2Field]
    }
    else if (labelThatHasChanged == line3Field)
    {
        //[UserLabelCode_line3Field] -- add your label text handling code here..
        ValueTree addressData (personData.getChildWithName(addressId));
        addressData.setProperty(line3Id, labelThatHasChanged->getText(), &undoManager);
        //[/UserLabelCode_line3Field]
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
        FileChooser chooser ("Open person data",File::nonexistent,"*.xml");
        if (chooser.browseForFileToOpen()) {
            Logger* log = Logger::getCurrentLogger();
            File file (chooser.getResult());
            XmlDocument xmlDoc(file);
            ScopedPointer<XmlElement>xml =xmlDoc.getDocumentElement();
            if (xml==nullptr) {
                log->writeToLog("XML error");
                return;
            }
            ValueTree newPerson (ValueTree::fromXml(*xml));
            if (newPerson.getType()!=personId) {
                log->writeToLog("Invalid person XML");
                return;
            }
            undoManager.beginNewTransaction();
            personData.copyPropertiesFrom(newPerson, &undoManager);
            ValueTree newAddress (newPerson.getChildWithName(addressId));
            ValueTree addressData (personData.getChildWithName(addressId));
            addressData.copyPropertiesFrom(newAddress, &undoManager);
        }
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == saveButton)
    {
        //[UserButtonCode_saveButton] -- add your button handler code here..
        FileChooser chooser("Save person data",File::nonexistent,"*.xml");
        if (chooser.browseForFileToSave(true)){
            File file (chooser.getResult());
            if (file.existsAsFile()) {
                file.moveToTrash();
                            }
            FileOutputStream stream(file);
            ScopedPointer<XmlElement>xml = personData.createXml();
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
void EntryForm::valueTreePropertyChanged(ValueTree& tree, const Identifier& property)
{
    if (property==firstNameId) {
        firstNameField->setText(tree.getProperty(property), dontSendNotification);

    }else if (property==lastNameId){
        lastNameField->setText(tree.getProperty(property), dontSendNotification);
    }else if (property==ageId){
        ageField->setText(tree.getProperty(property), dontSendNotification);
    }else if (property==line1Id){
        line1Field->setText(tree.getProperty(property), dontSendNotification);
    }else if (property==line2Id){
        line2Field->setText(tree.getProperty(property), dontSendNotification);
    }else if (property==line3Id){
        line3Field->setText(tree.getProperty(property), dontSendNotification);
    }
}
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
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff808080"/>
  <LABEL name="new label" id="714b16471a808e73" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0 0 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="First name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1288749268408a27" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="0 24 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Last name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bdf9b2c25f0e812e" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="0 48 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Age" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7e1ae07226ca2e29" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="0 80 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cd6bb4404ca6a054" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="0 104 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="836e138d7a3421fa" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="0 128 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Line 3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="firstNameField" id="779ed281d17d922a" memberName="firstNameField"
         virtualName="" explicitFocusOrder="0" pos="168 0 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="lastNameField" id="5679c6d63fe3454e" memberName="lastNameField"
         virtualName="" explicitFocusOrder="0" pos="168 24 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="ageField" id="f1764f22fd2970c0" memberName="ageField" virtualName=""
         explicitFocusOrder="0" pos="168 48 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line1Field" id="8a2754308db9fb04" memberName="line1Field"
         virtualName="" explicitFocusOrder="0" pos="168 80 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line2Field" id="edc049397ba2b361" memberName="line2Field"
         virtualName="" explicitFocusOrder="0" pos="168 104 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="line3Field" id="1bc75128d3d35d85" memberName="line3Field"
         virtualName="" explicitFocusOrder="0" pos="168 128 150 22" bkgCol="fff0ffff"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="be5bbea0a80b29e" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 65 328 104" title="Address"/>
  <TEXTBUTTON name="undoButton" id="4ac7ac0d72385d92" memberName="undoButton"
              virtualName="" explicitFocusOrder="0" pos="344 72 150 24" buttonText="Undo"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="openButton" id="201a3b5241226bc5" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="344 104 150 24" buttonText="Open..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="saveButton" id="f4c1eff4b6ce477b" memberName="saveButton"
              virtualName="" explicitFocusOrder="0" pos="344 136 150 24" buttonText="Save..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
