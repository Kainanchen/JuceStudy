/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent():menuBar(this)
{
    addAndMakeVisible(&menuBar);
    label.setEditable(true);
    addAndMakeVisible(&label);
    addAndMakeVisible(&slider);
    setSize (500, 400);
    
    PropertiesFile::Options options;
    options.applicationName = ProjectInfo::projectName;
    options.folderName = ProjectInfo::projectName;
    options.filenameSuffix = "settings";
    options.osxLibrarySubFolder = "Application Support";
    appProperties.setStorageParameters(options);
    
    PropertiesFile* props = appProperties.getUserSettings();
    
    label.setText(props->getValue("label","empty"), dontSendNotification);
    
    slider.setValue(props->getDoubleValue("slider",0.0));
    
}

MainContentComponent::~MainContentComponent()
{
    PropertiesFile* props = appProperties.getUserSettings();
    props->setValue("label", label.getText());
    props->setValue("slider", slider.getValue());
}



void MainContentComponent::resized()
{
    label.setBounds(10, 30, getWidth()-20, 20);
    slider.setBounds(10, 60, getWidth()-20, 20);
    menuBar.setBounds(0,0 , getWidth(), 20);
}

StringArray MainContentComponent::getMenuBarNames(){
    const char* menuNames[]={"Label","Slider",0};
    return StringArray (menuNames);
}

PopupMenu MainContentComponent::getMenuForIndex(int index, const String& name){
    PopupMenu menu;
    if (name=="Label") {
        menu.addItem(LabelClear, "Clear");
    }else if (name=="Slider"){
        menu.addItem(SliderMin, "Set to minimum");
        menu.addItem(SliderMax, "Set to maximum");
    }
    return menu;
}

void MainContentComponent::menuItemSelected(int menuID, int index){
    switch (menuID) {
        case LabelClear:
            label.setText(String::empty, dontSendNotification);
            break;
            case SliderMin:
            slider.setValue(slider.getMinimum());
            break;
            case SliderMax:
            slider.setValue(slider.getMaximum());
            break;
    }
}