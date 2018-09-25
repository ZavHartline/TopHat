FLAGS=-Wall 
DEPS=FileHandler.hpp LexicalAnalyzer.hpp ErrorHandler.hpp
%.o: %.cpp $(DEPS)
	g++ -c -o $@ $< $(FLAGS)

out: FileHandler.o LexicalAnalyzer.o ErrorHandler.o
	g++ -o ../bin/out FileHandler.o LexicalAnalyzer.o ErrorHandler.o
