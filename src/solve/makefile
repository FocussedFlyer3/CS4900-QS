CC = gcc
CFLAGS = -Wall -pedantic -std=c99

qsSolve.o: qsSolve.c
	$(CC) -c qsSolve.c

test: test.c qsSolve.c qsSolve.h ../log/qsLog.o
	$(CC) $(CFLAGS) -o test qsSolve.c test.c ../log/qsLog.o

clean:
	rm  -f  *.o
