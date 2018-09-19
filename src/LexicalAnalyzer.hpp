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
    inu,
    Alhecc
};

typedef struct token {
    std::string identifier;
    TYPE type;
    DATATYPE datatype;  
} token;

#endif
class LexicalAnalyzer{
    public:
         static int tokenize();
};
