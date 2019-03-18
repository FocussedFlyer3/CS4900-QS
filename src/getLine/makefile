CC = gcc
CFLAGS = -Wall -pedantic -std=c99

qsGetLine.o: qsGetLine.c
	$(CC) -c qsGetLine.c

test: test1.c qsGetLine.c qsGetLine.h ../log/qsLog.o
	$(CC) $(CFLAGS) -o test qsGetLine.c test1.c ../log/qsLog.o

clean:
	rm  -f  *.o
