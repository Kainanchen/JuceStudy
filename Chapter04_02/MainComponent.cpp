//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
:	 readFileButton("Read Image File..."),
	 writeFileButton("Write Image File...")
{
	 brightnessSlider.setRange(0.0, 10.0);
	 addAndMakeVisible(&readFileButton);
	 addAndMakeVisible(&writeFileButton);
	 addAndMakeVisible(&imageComponent);
	 addAndMakeVisible(&brightnessSlider);
	 
	 readFileButton.addListener(this);
	 writeFileButton.addListener(this);
	 brightnessSlider.addListener(this);
	 
	 setSize(500, 400);
}

void MainContentComponent::resized()
{
	 int controlHeight = 20;
	 int margin = 10;
	 int width = getWidth()-2*margin;
	 
	 readFileButton.setBounds(margin, margin, width, controlHeight);
	 imageComponent.setBounds(margin, readFileButton.getBottom()+margin, width, getHeight()-3*(controlHeight+margin)-2*margin);
	 brightnessSlider.setBounds(margin, imageComponent.getBottom()+margin, width, controlHeight);
	 writeFileButton.setBounds(margin, brightnessSlider.getBottom()+margin, width, controlHeight);
}

void MainContentComponent::buttonClicked(Button* button)
{
	 if (&readFileButton == button) {
		  FileChooser chooser("Choose an image file to display...");
		  if (chooser.browseForFileToOpen()) {
				origImage = ImageFileFormat::loadFrom(chooser.getResult());

				if (origImage.isValid()) {
					 procImage = origImage.createCopy();
					 imageComponent.setImage(procImage);
				}
		  }
	 } else if (&writeFileButton == button) {
		  if (procImage.isValid()) {
				FileChooser chooser("Write processed image to file...");
				
				if (chooser.browseForFileToSave(true)) {
					 FileOutputStream stream(chooser.getResult());
					 PNGImageFormat pngImageFormat;
					 pngImageFormat.writeImageToStream(procImage, stream);
				}
		  }
	 }
}

void MainContentComponent::sliderValueChanged(Slider* slider)
{
	 if (&brightnessSlider == slider) {
		  if (origImage.isValid() && procImage.isValid()) {
				const float amount = (float)brightnessSlider.getValue();
				float pixchange;
				if (amount == 0.f) {
					 procImage = origImage.createCopy();
					 imageComponent.setImage(procImage);
				} else {
					 pixchange = (amount>0)?amount:(-amount);
					 for (int v=0; v<origImage.getHeight(); ++v) {
						  for (int h=0; h<origImage.getWidth(); ++h) {
								Logger* log = Logger::getCurrentLogger();
								log->writeToLog(String(amount));
								Colour col = origImage.getPixelAt(h, v);
								procImage.setPixelAt(h, v, col.brighter(amount));
						  }
					 }
				}
				imageComponent.repaint();
		  }
	 }
}