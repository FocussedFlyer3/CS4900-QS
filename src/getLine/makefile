CC = gcc
CFLAGS = -Wall -pedantic -std=c99

test: test1.c qsGetLine.c qsGetLine.h
	$(CC) $(CFLAGS) -o test qsGetLine.c test1.c

clean:
	rm  -f  *.o
