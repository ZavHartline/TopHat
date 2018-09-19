#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <iostream>
#include <string>
#include <vector>
//#include "FileHandler.hpp"

/* A temperory enumerator */
/* TODO: Fill in serious values */
enum TYPE { 
    doggo,
    kitty,
    kamehameha
};

enum DATATYPE {
    shiba,
    tabby,
    Alhecc
};

typedef struct token {
    std::string identifier;
    TYPE type;
    DATATYPE datatype;  
} Token;

#endif
class LexicalAnalyzer{
    public:
         static int tokenize();
};
