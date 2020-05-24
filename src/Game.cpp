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

        gameboard.push_back(guess);

        if (guess.isWinningGuess()) {
            std::cout << "You win!" << std::endl;
            break;
        }

        remainingGuesses--;
    }
};


Guess Game::promptGuess() {
    std::cout << std::endl;
    std::cout << "You have " + std::to_string(remainingGuesses) + " guess(es) left." << std::endl;
    std::cout << "Enter guess: " << std::endl;

    std::string input;
    std::cin >> input;

    if (input == "HISTORY") {
        printBoard();
    }

    return Guess(input);
};

void Game::printBoard() {
    for (int i = 0; i < gameboard.size(); i++) {
        std::cout << gameboard.at(i) << std::endl;
    }

    std::cout << std::endl;
}
