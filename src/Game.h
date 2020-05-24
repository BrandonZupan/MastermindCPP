// Game.h
// Class declaration for game

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Code.h"
#include "Guess.h"

#define BOARD_SIZE 12


class Game {

private:
    Code secretCode;
    std::vector<Guess> gameboard;

    int remainingGuesses;

    bool isWin = false;

    // Ask users for input
    // Returns their input as string
    std::string promptInput();

    // Handles a user input
    void handleInput(std::string input);

    // Print the board
    void printBoard();

    // Handle a guess
    // Returns true if it is a valid guess and false if it isn't
    bool handleGuess(std::string input);

public:
    // Default constructor
    // Creates a Game with debug mode set to false
    Game();

    // Constructor with debug param
    // If true, starts game in debug mode
    Game(bool debug);

    // Starts the game
    void runGame();

   Code getSecretCode() const { return secretCode; }

};

#endif
