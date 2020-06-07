// Code.cpp
// Class implementation of a mastermind code

#include "Code.h"
#include <iostream>

#include "Config.h"

Code::Code() : Code("BBBB") {} ;

Code::Code(std::string code) {
    if (isValidCode(code)) {
        this->code = code;
    }
    else {
        this-> code = "";
    }
}

bool Code::isValidCode(std::string code) {
    if (code.size() != CODE_LENGTH) {
        return false;
    }
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

std::string Code::generateRandomCode() {
    // need a way to bring the colors into scope, not sure what the best way is
    char colors[6] = { 'B', 'G', 'O', 'P', 'R', 'Y' };

    // call rand() to pick a random letter from the list of available ones
    std::string code = "";
    for (int i = 0; i < CODE_LENGTH; i++) {
        code += colors[rand() % sizeof(colors)];
    }

    return code;
}
