//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
{
	 setSize(200, 200);
}

void MainContentComponent::paint(Graphics& g)
{
	 Random& r(Random::getSystemRandom());
	 g.fillAll(Colours::cornflowerblue);
	 
	 
	 
	 Path path;
	 path.startNewSubPath(r.nextFloat()*getWidth(), r.nextFloat()*getHeight());
	 
	 for (int i=0; i<20; i++) {
		  path.lineTo(r.nextFloat()*getWidth(), r.nextFloat()*getHeight());
	 }
	 
	 g.setColour(Colour(r.nextFloat(),
							  r.nextFloat(),
							  r.nextFloat(),
							  r.nextFloat()));
		  
	 const float lineThinkness = r.nextFloat() * 0.5 + 1.0;
	 g.strokePath(path, PathStrokeType(lineThinkness));

}


/*
void MainContentComponent::paint(Graphics& g)
{
	 Random& r(Random::getSystemRandom());
	 g.fillAll(Colours::cornflowerblue);
	 
	 const float lineThinkness = r.nextFloat() * 0.5 + 1.0;
	 
	 float x1 = r.nextFloat() * getWidth();
	 float y1 = r.nextFloat() * getHeight();
	 
	 for (int i=0; i<20; i++) {
		  g.setColour(Colour(r.nextFloat(),
									r.nextFloat(),
									r.nextFloat(),
									r.nextFloat()));
		  
		  const float x2 = r.nextFloat() * getWidth();
		  const float y2 = r.nextFloat() * getHeight();
		  
		  g.drawLine(x1, y1, x2, y2, lineThinkness);
		  x1 = x2;
		  y1 = y2;
	 }
}
*/



