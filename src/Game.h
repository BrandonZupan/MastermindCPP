// Game.h
// Class declaration for game

#ifndef GAME_H
#define GAME_H

#include "Code.h"

#define BOARD_SIZE 12


class Game {

private:
    Code secretCode;
    Code gameboard[BOARD_SIZE];

    int remainingGuesses;

    // Ask users for a guess
    // Returns a code if it was valid, or null if it wasn't
    Code promptGuess();

public:
    // Default constructor
    // Creates a Game with debug mode set to false
    Game();

    // Constructor with debug param
    // If true, starts game in debug mode
    Game(bool debug);

    // Starts the game
    void runGame();

};

#endif
