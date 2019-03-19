CC = gcc
CFLAGS = -Wall -pedantic -std=c99

qsPutLine.o: qsPutLine.c
	$(CC) -c qsPutLine.c

test: test.c qsPutline.c qsPutline.h ../log/qsLog.o
	$(CC) $(CFLAGS) -o test qsPutline.c ../log/qsLog.o test.c

clean:
	rm  -f  *.o
