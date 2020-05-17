// Code.cpp
// Class implementation of a mastermind code

#include "Code.h"
#include <iostream>

Code::Code(std::string code) {
    if (isValidCode(code)) {
        this->code = code;
    }
    else {
        std::cout << "invalid code" << std::endl;
    }
}

bool Code::isValidCode(std::string code) {
    for (int i = 0; i < code.size(); i++) {
    bool inColors = false;
        // Check if it be in COLORS
        for (int j = 0; j < sizeof(COLORS); j++) {
            if (code[i] == COLORS[j]) {
                inColors = true;
                break;
            }
        }
        if (inColors == false) {
            return false;
        }
    }
    return true;
}
