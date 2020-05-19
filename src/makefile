# Adapted from http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-g -std=c++11

final: Driver.o Game.o Code.o Guess.o
	$(CC) -o Mastermind Driver.o Game.o Code.o Guess.o

driver: Driver.cpp
	$(CC) -c Driver.cpp

game: Game.cpp Guess.cpp
	$(CC) -c Game.cpp Guess.cpp

guess: Guess.cpp
	$(CC) -c Guess.cpp

code: Code.cpp
	$(CC) -c Code.cpp

.PHONY: clean

clean:
	rm *.o
