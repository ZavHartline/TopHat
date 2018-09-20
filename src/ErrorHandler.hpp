#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <iostream>
#include <string>
#endif

enum ERROR_TYPE {
   DEFAULT, lexan, file_in, file_out 
};

enum SEVERITY {
    UNSPECIFIED, warn, fatal, nocompile
};

class ErrorHandler{
    public:
        static int report(std::string message) {
            return report(message, DEFAULT);
        }
        static int report(std::string message, ERROR_TYPE code) {
            return report(message, code, UNSPECIFIED);
        }
        static int report(std::string message, ERROR_TYPE code, SEVERITY severity);
};
