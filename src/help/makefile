CC = gcc
CFLAGS = -Wall -pedantic -std=c99

qsHelp.o: qsHelp.c
	$(CC) -c qsHelp.c

test: test.c qsHelp.h qsHelp.c
	$(CC) $(CFLAGS) -o test qsHelp.c test.c

clean:
	rm  -f  *.o
