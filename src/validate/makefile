CC = gcc
CFLAGS = -Wall -pedantic -std=c99

qsValidate.o: qsValidate.c
	$(CC) -c qsValidate.c

test: test.c qsValidate.c qsValidate.h ../getLine/qsGetLine.o ../log/qsLog.o
	$(CC) $(CFLAGS) -o test qsValidate.c test.c ../getLine/qsGetLine.o ../log/qsLog.o
	./test < testInputs.txt

clean:
	rm  -f  *.o
