FLAGS=-Wall -std=c++98 -pedantic
DEPS=FileHandler.hpp LexicalAnalyzer.hpp
%.o: %.c $(DEPS)
	g++ -c -o $@ $< $(FLAGS)

FileHandler: FileHandler.o LexicalAnalyzer.o
	g++ -o ../bin/FileHandler FileHandler.o LexicalAnalyzer.o
