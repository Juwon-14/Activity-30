//
//  TextBox.cpp
//  Activity-30
//
//  Created by Juwon Hong on 11/13/24.
//

#include "TextBox.h"
#include <iostream>

TextBox::TextBox(const string& initialValue) {
    value = initialValue;
}

void TextBox::setValue(const string& newValue) {
    value = newValue;
}

string TextBox::getValue() const {
    return value;
}

void TextBox::display() const {
    std::cout << "TextBox Value: " << value << std::endl;
}
