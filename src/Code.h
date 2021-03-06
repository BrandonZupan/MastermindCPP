// Code.h
// Class file for a code

#ifndef CODE_H
#define CODE_H

#include <string>

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
    explicit Code(std::string code);

    // Returns the code value
    std::string getCode() const{
        return code;
    }

    // Returns code as a string
    std::string toString() const{
        return code;
    }

    // Generates a random code
    static std::string generateRandomCode();
    
//    const char* getColorsPointer() const{ return &COLORS; }
};

#endif
