//
//  TextBox.h
//  Activity-30
//
//  Created by Juwon Hong on 11/13/24.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>
using std::string;

class TextBox {
private:
    string value;

public:
    // Constructor to set the initial value
    TextBox(const string& initialValue = "");

    // Function to set the value
    void setValue(const string& newValue);

    // Function to get the value
    string getValue() const;

    // Function to display the value
    void display() const;
};

#endif // TEXTBOX_H
