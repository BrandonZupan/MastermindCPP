// Code.h
// Class file for a code

#ifndef CODE_H
#define CODE_H

#include <string>

#define CODE_LENGTH 4

class Code {

private:
    char COLORS[6] = {'B', 'G', 'O', 'P', 'R', 'Y'};
    std::string code;

    // Checks if a code is valid
    bool isValidCode(std::string code);
    
public:
    // Default constructor
    Code();

    // Constructor with string of code
    // Checks if the string is valid and applies it
    Code(std::string code);

    // Returns the code value
    std::string getCode() const{
        return code;
    }

    // Returns code as a string
    std::string toString() const{
        return code;
    }
    
//    const char* getColorsPointer() const{ return &COLORS; }
};

#endif
