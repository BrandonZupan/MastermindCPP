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
        std::string input = promptInput();
        handleInput(input); 
    }

    if (isWin) {
        std::cout << "You win!" << std::endl;
    }
    else {
        std::cout << "You lose!" << std::endl;
    }
};


std::string Game::promptInput() {
    std::cout << std::endl;
    std::cout << "You have " + std::to_string(remainingGuesses) + " guess(es) left." << std::endl;
    std::cout << "Enter guess: " << std::endl;

    std::string input;
    std::cin >> input;

    return input;
};

void Game::printBoard() {
    for (int i = 0; i < gameboard.size(); i++) {
        std::cout << gameboard.at(i) << std::endl;
    }

    std::cout << std::endl;
}

void Game::handleInput(std::string input) {
    if (input == "HISTORY") {
        printBoard();
    }
    else if (input == "QUIT") {
        remainingGuesses = 0;
    }
    else {
        if (!handleGuess(input)) {
            std::cout << "INVALID_GUESS" << std::endl;
        }
    }
}

bool Game::handleGuess(std::string input) {
    Guess guess = Guess(input);
    if (guess.getCode() == "") {
        return false;
    }
    else {
        guess.setBlackAndWhite(this->getSecretCode());
        std::cout << guess << std::endl;

        gameboard.push_back(guess);

        if (guess.isWinningGuess()) {
            isWin = true;
            remainingGuesses = 0;
            return true;
        }

        remainingGuesses--;
        return true;
    }
}
