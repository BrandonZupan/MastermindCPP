// Game.cpp
// Game class for Mastermind

#include "Game.h"
#include <cstdlib>
#include <iostream>
#include <string>

// #include "Code.h"

Game::Game() {
    Game(false);
};

Game::Game(bool debug) {
    this->secretCode = Code("BGOP");
    if (debug) {
        std::cout << "Secret code: " + secretCode.toString() << std::endl;
    }

    this->remainingGuesses = BOARD_SIZE;
};

void Game::runGame() {
    // Check if there's any remaining guesses
    // Ask for a guess
    // See if it is secret code
    // Give resulting amount of black and white pegs

    while (remainingGuesses > 0) {
        Guess guess = promptGuess();
        if (guess.getCode() == "") {
            std::cout << "INVALID_GUESS" << std::endl;
            continue;
        }
        
        guess.setBlackAndWhite(this->getSecretCode());

        std::cout << guess << std::endl;

        remainingGuesses--;
    }
};

Guess Game::promptGuess() {
    std::cout << "You have " + std::to_string(remainingGuesses) + " guess(es) left." << std::endl;
    std::cout << "Enter guess: " << std::endl;

    std::string input;
    std::cin >> input;

    return Guess(input);
};
