FLAGS=-Wall -std=c++98 -pedantic
DEPS=FileHandler.hpp LexicalAnalyzer.hpp ErrorHandler.hpp
%.o: %.c $(DEPS)
	g++ -c -o $@ $< $(FLAGS)

FileHandler: FileHandler.o LexicalAnalyzer.o ErrorHandler.o
	g++ -o ../bin/FileHandler FileHandler.o LexicalAnalyzer.o ErrorHandler.o
