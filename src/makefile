# Adapted from http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-g -std=c++11

final: Driver.o Game.o Code.o
	$(CC) -o Mastermind Driver.o Game.o Code.o

driver: Driver.cpp
	$(CC) -c Driver.cpp

game: Game.cpp
	$(CC) -c Game.cpp

code: Code.cpp
	$(CC) -c Code.cpp

.PHONY: clean

clean:
	rm *.o
