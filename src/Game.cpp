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
};
