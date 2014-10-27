/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent():readFileButton("Read Image File..."),writeFileButton("Write Image File...")
{
    brightnessSlider.setRange(-10.0, 10.0);
    addAndMakeVisible(&readFileButton);
    addAndMakeVisible(&imageComponent);
    addAndMakeVisible(&brightnessSlider);
    addAndMakeVisible(&writeFileButton);
    
    readFileButton.addListener(this);
    writeFileButton.addListener(this);
    brightnessSlider.addListener(this);
    setSize (500, 400);
}



void MainContentComponent::resized()
{
    int controlHeight=20;
    int margin = 10;
    int width=getWidth()-margin*2;
    readFileButton.setBounds(margin, margin, width, controlHeight);
    imageComponent.setBounds(margin, readFileButton.getBottom()+margin, width , getHeight()-(controlHeight+margin)*3-margin*2);
    brightnessSlider.setBounds(margin, imageComponent.getBottom()+margin, width, controlHeight);
    writeFileButton.setBounds(margin, brightnessSlider.getBottom()+margin, width, controlHeight);
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::buttonClicked(Button* button){
    if(&readFileButton==button){
        FileChooser chooser ("Choose an image file to display...");
        if (chooser.browseForFileToOpen()) {
            origImage=ImageFileFormat::loadFrom(chooser.getResult());
            if (origImage.isValid()) {
                procImage=origImage.createCopy();
                imageComponent.setImage(procImage);
            }
        }
    }
    else if (&writeFileButton==button){
        if (procImage.isValid()) {
            FileChooser chooser ("Write Processed image to file...");
            if (chooser.browseForFileToSave(true)) {
                FileOutputStream stream (chooser.getResult());
                PNGImageFormat pngImageFormat;
                pngImageFormat.writeImageToStream(procImage, stream);
            }
        }
    }
}
void MainContentComponent::sliderValueChanged(Slider *slider){
    if (&brightnessSlider==slider) {
        if (origImage.isValid()&&procImage.isValid()) {
            const float amount = (float)brightnessSlider.getValue();
            Logger* log = Logger::getCurrentLogger();
            log->writeToLog(String(amount));
            if (amount==0.f) {
                procImage=origImage.createCopy();
                imageComponent.setImage(procImage);
            }else
            {
                if (amount>0.f){
                 
                for (int v=0; v<origImage.getHeight(); ++v) {
                    for (int h=0; h<origImage.getWidth(); ++h) {
                        Colour col = origImage.getPixelAt(h, v);
                        procImage.setPixelAt(h, v, col.brighter(amount));}}
                }
                    else if(amount<0.f){
                        for (int v=0; v<origImage.getHeight(); ++v) {
                            for (int h=0; h<origImage.getWidth(); ++h) {
                                Colour col = origImage.getPixelAt(h, v);
                        procImage.setPixelAt(h,v,col.darker(-amount));}}}
            }
        imageComponent.repaint();
        }
    }
    }
