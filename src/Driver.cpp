// Driver.cpp
// Driver file for Mastermind

#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Game.h"
#include "Code.h"

// #define TEST

void testCodeCreation();

int main(int argc, char *argv[]) {
    // init random number generator
    srand((unsigned) time(0));

    std::cout << "Welcome to Mastermind." << std::endl; 
    
    Game game = Game(true);
    game.runGame();
    
    #ifdef TEST

    testCodeCreation();
    

    #endif
}

/*********
 * Tests *
 *********/

void testCodeCreation() {
    std::cout << "Testing valid code letters" << std::endl;
    Code code1 = Code("BGOP");
    std::cout << "Testing invalid code letters" << std::endl;
    Code code2 = Code("QQQQ");
    std::cout << "Testing invalid code length" << std::endl;
    Code code3 = Code("BGOPRY");
}
