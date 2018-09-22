FLAGS=-Wall 
DEPS=FileHandler.hpp LexicalAnalyzer.hpp ErrorHandler.hpp
%.o: %.cpp $(DEPS)
	g++ -c -o $@ $< $(FLAGS)

FileHandler: FileHandler.o LexicalAnalyzer.o ErrorHandler.o
	g++ -o ../bin/FileHandler FileHandler.o LexicalAnalyzer.o ErrorHandler.o
