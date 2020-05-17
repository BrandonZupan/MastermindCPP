// Driver.cpp
// Driver file for Mastermind

#include <cstdlib>
#include <iostream>

#include "Game.h"
#include "Code.h"

// #define TEST

void testCodeCreation();

int main(int argc, char *argv[]) {
    std::cout << "hello world" << std::endl; 
    
    Game game;
    
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
