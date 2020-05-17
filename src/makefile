# Adapted from http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-g

final: Driver.o Game.o
	$(CC) -o Mastermind Driver.o Game.o

driver: Driver.cpp
	$(CC) -c Driver.cpp

game: Game.cpp
	$(CC) -c Game.cpp

.PHONY: clean

clean:
	rm *.o
