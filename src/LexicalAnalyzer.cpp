#include "LexicalAnalyzer.hpp"

using namespace std;
/**This method is designed to split all lines from the input text file into tokens
 * 
 * 
 * 
**/
int LexicalAnalyzer::tokenize(){
    cout << "\n\nLoading lexical analyzer unit\n\n";
    cout << "Testing enum data... \n\n";
    
    Token tok1 = {
        string("Boi"),  //identifier
        doggo,          //Type
        shiba           //Datatype
    };

    Token tok2 = {
        string("Cate"), //identifier
        kitty,          //Type
        tabby           //Datatype
    };
    
    Token tok3 = {
        string("Hunam"), //identifier
        kamehameha,      //Type
        Alhecc           //Datatype
    };

    cout << "Printing all stored data:\n";
    return 0;
}

