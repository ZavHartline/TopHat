#include "FileHandler.hpp"

using namespace std;

int loadFile(string filepath) {

    /* Some object declares */
    ifstream fileStream(filepath);  /* Using arbitrary source.jug for now */
    string readLine("");
    string processedLine("");
    vector<string> fileContents;
    
    /* Cleans out all comments and trailing and leading newlines.*/
    regex cleaner("(#_[\\W\\w]*?_#)|(#.*?\\n)|(\\n)");  

    /* Read in source file */
    if(fileStream.is_open()) {
        cout << "File's open.\n";
        while(getline(fileStream, readLine, ';')) {
            /* Apply the regex to replace with empty string, effectively removing. */
            processedLine = regex_replace(readLine, cleaner, ""); 
            fileContents.push_back(processedLine);   
        }
        fileStream.close();
    }
    else {
        ErrorHandler::report("Could not access file (" + filepath + ")", file_in, fatal);
    }
    cout << "\n\nFull file as string:\n\n";
   
    /* Prints out the contents of the vector fileContents */ 
    for(vector<string>::iterator it = fileContents.begin(); it != fileContents.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}

int regexTest(){
    string input("int 5.0 float");
    regex test("(int)|(float)|(\\d*\\.\\d+)");
    sregex_iterator begin = sregex_iterator(input.begin(), input.end(), test);
    sregex_iterator end = sregex_iterator();

    cout << "Found " << distance(begin, end) << " matches found" << endl;
    
    for(sregex_iterator i = begin; i != end; i++) {
        smatch matchedWord = *i;
        cout <<": " <<  matchedWord.str() << endl;
        for(size_t j = 1; j < matchedWord.size(); ++j){
            if(!matchedWord.str(j).empty()){
                cout << j  << endl;
                break;
            }
        }
    }

    return 0;
}




int main() {
    //loadFile("./source.jug");
    //LexicalAnalyzer::tokenize();
    regexTest();
    return 0;
}




