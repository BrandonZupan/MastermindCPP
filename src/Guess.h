// Guess.h
// Represents a guess class
// Inherits from code

#ifndef GUESS_H
#define GUESS_H

#include <iostream>

#include "Code.h"

class Guess : public Code {

private:
    int numBlack;
    int numWhite;

public:
    // Default constructor
    Guess();

    // Constructor with a string code
    Guess(std::string code)
    : Code(code) {}

    // Fill in the number of black and white pins
    void setBlackAndWhite(std::string secretCode);

    int getBlack() const { return numBlack; }

    int getWhite() const { return numWhite; }
};

// ostream override
std::ostream& operator << (std::ostream &out, const Guess &g);

#endif
