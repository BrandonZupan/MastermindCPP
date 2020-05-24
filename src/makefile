# Adapted from http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-g -std=c++11

final: Driver.o Game.o Code.o Guess.o
	$(CC) -o Mastermind Driver.o Game.o Code.o Guess.o $(CFLAGS)

driver: Driver.cpp
	$(CC) -c Driver.cpp $(CFLAGS)

game: Game.cpp Guess.cpp
	$(CC) -c Game.cpp Guess.cpp $(CFLAGS)

guess: Guess.cpp
	$(CC) -c Guess.cpp $(CFLAGS)

code: Code.cpp
	$(CC) -c Code.cpp $(CFLAGS)

.PHONY: clean

clean:
	rm *.o
