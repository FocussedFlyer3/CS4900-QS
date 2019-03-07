CC = gcc
CFLAGS = -Wall -pedantic -std=c99

test: test.c qsValidate.c qsValidate.h ../getLine/qsGetLine.c
	$(CC) $(CFLAGS) -o test qsValidate.c test.c ../getLine/qsGetLine.c

clean:
	rm  -f  *.o
