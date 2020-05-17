// Game.cpp
// Game class for Mastermind

#include "Game.h"
#include <cstdlib>
#include <iostream>

Game::Game() {
    Game(false);
};

Game::Game(bool debug) {
    std::cout << "new game created" << std::endl;
};
