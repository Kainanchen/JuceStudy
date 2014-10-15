//
//  NumericalLabel.cpp
//  JuceStudy
//
//  Created by Ken Chen on 14-9-7.
//
//

#include "NumericalLabel.h"

void NumericalLabel::editorShown(TextEditor* editor)
{
	editor->setInputRestrictions(0, "-0123456789.");
}