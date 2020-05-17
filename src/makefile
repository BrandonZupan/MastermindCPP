# Adapted from http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC=g++
CFLAGS=-g

final: Driver.o
	$(CC) -o Mastermind Driver.o

driver: Driver.cpp
	$(CC) -c Driver.cpp

.PHONY: clean

clean:
	rm *.o
