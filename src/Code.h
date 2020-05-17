// Code.h
// Class file for a code

#ifndef CODE_H
#define CODE_H

#include <string>

class Code {

private:
    const char COLORS[6] = {'B', 'G', 'O', 'P', 'R', 'Y'};
    std::string code;

    // Checks if a code is valid
    bool isValidCode(std::string code);
    
public:
    // Constructor with string of code
    // Checks if the string is valid and applies it
    Code(std::string code);

    /* FUNCTION - int getCode
     * returns the string code that is stored

    */

    std::string getCode() {
        return code;
    }

};

#endif
