//
//  NumLabel.h
//  Chapter02_03
//
//  Created by ZhangJunhong on 14-10-15.
//
//

#ifndef Chapter02_03_NumLabel_h
#define Chapter02_03_NumLabel_h
#include "../JuceLibraryCode/JuceHeader.h"
class NumericalLabel : public Label
{
public:
    void editorShown(TextEditor* editor)
    {
        editor->setInputRestrictions(0,"-0123456789.");
    }
};


#endif
