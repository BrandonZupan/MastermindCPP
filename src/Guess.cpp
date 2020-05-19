// Guess.cpp
// Implements the guess class

#include "Guess.h"

void Guess::setBlackAndWhite() {
    // setBlack();
    // setWhite();
}

void Guess::calculateBlack() {
    // occur when a pin is in the right spot and right color
    
}

void Guess::calculateWhite() {
    // occur when a pin is the right color
    //iterate through colors and see how many instances of each color there are
    int numPins = 0;
    for (int i = 0; i < sizeof(COLORS); i++) {
        for (int j = 0; j < code.size(); j++) {
            if (COLORS[i] == code[j]) {
                numPins++;
            }
        }
    }
}
