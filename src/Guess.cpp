// Guess.cpp
// Implements the guess class

#include "Guess.h"

void Guess::setBlackAndWhite(Code secretCode) {
    // occur when a pin is the right color
    //iterate through colors and see how many instances of each color there are
    int numWhite = 0;
    int numBlack = 0;

    std::string secretString = secretCode.getCode();

    for (int i = 0; i < secretString.size(); i++) {
        for (int j = 0; j < getCode().size(); j++) {
            if (secretString[i] == getCode()[j]) {
                numWhite++;
                break;
            }
        }
        
        if (secretString[i] == getCode()[i]) {
            numBlack++;
        }
    }

    numWhite -= numBlack;

    this->numWhite = numWhite;
    this->numBlack = numBlack;
}

int Guess::calculateBlack(Code secretCode) {
    int numBlack = 0;

    std::string secretString = secretCode.getCode();
    for (int i = 0; i < secretString.size(); i++) {
        if (secretString[i] == getCode()[i]) {
            numBlack++;
        }
    }
    
    return numBlack;
}

int Guess::calculateWhite(Code secretCode) {
    // For each possible letter see how many matching instances there are
    int numWhite = 0;

//    for (int i = 0; i < *secretCode.getColors().size; i++) {
//        for (int j = 0; j < getCode().size(); j++) {
//            if (*secretCode.getColors()[i] == getCode()[j]) {
//                numWhite++;
//            }
//        }
//    }
    
    std::string secretString = secretCode.getCode();
    for (int i = 0; i < secretString.size(); i++) {
    }

    return numWhite;
}

std::ostream& operator << (std::ostream &out, const Guess &g) {
    // format of `XXXX -> xb_xw`
    out << g.getCode() << " -> " << g.getBlack() << "b_" << g.getWhite() << "w";
    return out;
}
