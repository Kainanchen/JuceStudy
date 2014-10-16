//
//  NumLabel.cpp
//  Chapter02_03
//
//  Created by ZhangJunhong on 14-10-15.
//
//

#include "NumLabel.h"

void NumericalLabel::editorShown(TextEditor* editor)
{
    editor->setInputRestrictions(0,"-0123456789.");

};