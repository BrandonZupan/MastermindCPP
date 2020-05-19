// Guess.cpp
// Implements the guess class

#include "Guess.h"

void Guess::setBlackAndWhite(std::string secretCode) {
    // occur when a pin is the right color
    //iterate through colors and see how many instances of each color there are
    int numWhite = 0;
    int numBlack = 0;

    for (int i = 0; i < secretCode.size(); i++) {
        for (int j = 0; j < getCode().size(); j++) {
            if (secretCode[i] == getCode()[j]) {
                numWhite++;
            }
        }
        
        if (secretCode[i] == getCode()[i]) {
            numBlack++;
        }
    }

    numWhite-= numBlack;

    this->numWhite = numWhite;
    this->numBlack = numBlack;
}

std::ostream& operator << (std::ostream &out, const Guess &g) {
    // format of `XXXX -> xb_xw`
    out << g.getCode() << " -> " << g.getBlack() << "b_" << g.getWhite() << "w";
    return out;
}
