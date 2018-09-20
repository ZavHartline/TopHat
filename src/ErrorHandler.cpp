#include "ErrorHandler.hpp"

int ErrorHandler::report(std::string message, ERROR_TYPE code, SEVERITY severity){
    
    std::string codeString("");
    std::string severityString("");

    switch(code) {
        case DEFAULT: 
            codeString = "UNSPECIFIED UNIT";
            break;
        case lexan:
            codeString = "Lexical Analyzer";
            break;
        case file_in:
            codeString = "File Input";
            break;
        case file_out:
            codeString = "File Output";
    }
    
    switch(severity) { 
        case UNSPECIFIED:
            severityString = "UNSPECIFIED SEVERITY";
            break;
        case warn:
            severityString = "Warning";
            break;
        case fatal:
            severityString = "FATAL";
            break;
        case nocompile:
            severityString = "No Compilation";
            break;
        default:
            severityString = "INVALID SEVERITY";
    }
    
    std::cout << "[" << codeString << "] "
              << severityString << ": "
              << message << std::endl;
    
    if(severity == fatal)
        exit(code);

    return code;
}
