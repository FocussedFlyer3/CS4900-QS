CC = gcc
CFLAGS = -Wall -pedantic -std=c99

test: test.c qsSolve.c qsSolve.h
	$(CC) $(CFLAGS) -o test qsSolve.c test.c

clean:
	rm  -f  *.o 
