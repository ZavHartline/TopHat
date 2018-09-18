FLAGS=-Wall -std=c++98 -pedantic
DEPS=FileHandler.hpp
%.o: %.c $(DEPS)
	g++ -c -o $@ $< $(FLAGS)

FileHandler: FileHandler.o
	g++ -o ../bin/FileHandler FileHandler.o 
