// Guess.h
// Represents a guess class
// Inherits from code

#ifndef GUESS_H
#define GUESS_H

#include "Code.h"

class Guess : public Code {

private:
    int numBlack;
    int numWhite;

    // Find the number of black pins
    void calculateBlack();

    // Find the number of white pins
    void calculateWhite();

public:
    // Default constructor
    Guess();

    // Constructor with a string code
    Guess(std::string code)
    : Code(code) {}

    // Fill in the number of black and white pins
    void setBlackAndWhite();
};

#endif
