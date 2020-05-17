// Guess.h
// Represents a guess class
// Inherits from code

#ifndef GUESS_H
#define GUESS_H

class Guess : public Code {

private:
    int numBlack;
    int numWhite;

public:
    // Default constructor
    Guess();

    // Constructor with a string code
    Guess(std::string code);
}

#endif
