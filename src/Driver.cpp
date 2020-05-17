// Driver.cpp
// Driver file for Mastermind

#include <cstdlib>
#include <iostream>

#include "Game.h"
#include "Code.h"

void testCodeCreation();

int main(int argc, char *argv[]) {
    std::cout << "hello world" << std::endl; 
    
    Game game;

    testCodeCreation();
}

/*********
 * Tests *
 *********/

void testCodeCreation() {
    std::cout << "Testing valid code" << std::endl;
    Code code1 = Code("BGOP");
    std::cout << "Testing invalid code" << std::endl;
    Code code2 = Code("QQQQ");
}
