#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <iostream>
#include <iterator>
#include <string>
#include <vector>
//#include "FileHandler.hpp"

/* A temperory enumerator */
/* TODO: Fill in serious values */

enum TYPE {
    identifier,
    native_operator,
    integer_literal,
    float_literal,
    string_literal,
    std_out,
    std_in,
    native_type,
};

typedef struct token {
    std::string identifier;
    TYPE type;
} Token;



class LexicalAnalyzer{
    public:
        static int tokenize(std::vector<std::string>);
};

#endif
