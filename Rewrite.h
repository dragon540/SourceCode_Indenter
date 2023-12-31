//
// Created by shobhit on 12/7/23.
//

#ifndef SOURCECODE_INDENTER_REWRITE_H
#define SOURCECODE_INDENTER_REWRITE_H

#include <string>

#include "Tokeniser.h"
#include "FileIO.h"

// preprocessor keyword
#define PRE_PR_KW 1
// preprocessor value
#define PRE_PR_VAL 2
// data type
#define DATA_TYPE 3
// identifier(variable name, etc)
#define IDEN 4
// parenthesis - (, ), [, ]
#define L_PAR 5
#define R_PAR 6
// curly braces
#define OPEN_CURLY 7
#define CLOSE_CURLY 8
// conditions - if, else, while, for, do, switch
#define COND 9
// comparator - <, >, <=, >=, ==, !=
#define COMP 10
// literal - "abcd", 8, 'c', 9.7
#define LITERAL 11
// semi-colon
#define TERMINATOR 12

class Rewrite {
private:
    // return a string with "tab_length" number of tab characters
    // example : ret_nTab(3) return a string x
    // where x = "\t\t\t"
    std::string ret_nTab(unsigned int tab_length);

    // returns the formatted string which will be finally written to the file
    std::string formattedWriteOnString(std::string original_srcFilePath);
public:
    // writes the formatted string (of the indented src) to the dest_filePath
    void fileRewrite(std::string src_filePath, std::string dest_filePath);
};


#endif //SOURCECODE_INDENTER_REWRITE_H
