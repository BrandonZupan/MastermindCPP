// Game.cpp
// Game class for Mastermind

#include "Game.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Game::Game() {
    Game(false);
};

Game::Game(bool debug) {
    cout << "new game created" << endl;
};
