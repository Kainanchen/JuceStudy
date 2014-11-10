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

class MainContentComponent : public Component,
							 public MenuBarModel
{
	
public:
	
	MainContentComponent();
	~MainContentComponent();
	
	void resized();
	
	StringArray getMenuBarNames();
	PopupMenu getMenuForIndex(int index, const String& name);
	void menuItemSelected(int menuID, int index);
	
	enum MenuIDs {
		LabelClear = 1000,
		SliderMin,
		SliderMax
	};
	
private:
	
	Label label;
	Slider slider;
	//MenuBarComponent menuBar;
	ApplicationProperties appProperties;
	ScopedPointer<MenuBarModel> menuModel;
	
};



#endif /* defined(__Lipsdrum__MainComponent__) */
