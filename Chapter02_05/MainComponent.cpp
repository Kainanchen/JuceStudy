//
//  MainComponent.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-8-19.
//
//

#include "MainComponent.h"


MainContentComponent::MainContentComponent()
:	 x(0), y(0)
{
	 setSize(800, 800);
}

void MainContentComponent::paint(Graphics& g)
{
	 g.fillAll(Colours::cornflowerblue);
	 g.setColour(Colours::yellowgreen);
	 g.setFont(Font(24));
	 g.drawText(text, 0, 0, getWidth(), getHeight(), Justification::centred, false);
	 g.setColour(Colours::yellow);
	 const float radius = 50.0;
	 g.fillEllipse(x-radius, y-radius, radius*2.0, radius*2.0);
}

void MainContentComponent::mouseEnter(const MouseEvent& event)
{
	 text = "mouse enter";
	 handleMouse(event);
}

void MainContentComponent::mouseMove(const MouseEvent& event)
{
	 text = "mouse move";
	 handleMouse(event);
}

void MainContentComponent::mouseDown(const MouseEvent& event)
{
	 text = "mouse down";
	 handleMouse(event);
}

void MainContentComponent::mouseDrag(const MouseEvent& event)
{
	 text = "mouse drag";
	 handleMouse(event);
}

void MainContentComponent::mouseUp(const MouseEvent& event)
{
	 text = "mouse up";
	 handleMouse(event);
}

void MainContentComponent::mouseExit(const MouseEvent& event)
{
	 text = "mouse exit";
	 handleMouse(event);
}

void MainContentComponent::handleMouse(const MouseEvent& event)
{
	 x = event.x;
	 y = event.y;
	 repaint();
}

