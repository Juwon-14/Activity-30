//
//  main.cpp
//  Activity-30
//
//  Created by Juwon Hong on 11/13/24.
//

#include "TextBox.h"
#include <iostream>

int main() {
    // Create a TextBox instance and set an initial value
    TextBox textBox("This is the CIS 25 class");

    // Display the initial value
    textBox.display();

    // Set a new value
    textBox.setValue("I'm Juwon Hong");

    // Display the updated value
    textBox.display();

    // Access the value directly using the getter
    std::cout << "Accessed Value: " << textBox.getValue() << std::endl;

    return 0;
}
