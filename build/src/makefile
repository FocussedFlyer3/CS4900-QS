CC = gcc
CFLAGS = -Wall -pedantic -std=c99

quadSolver:quadSolver.c ../../src/log/qsLog.o ../../src/getLine/qsGetLine.o \
	../../src/validate/qsValidate.o ../../src/solve/qsSolve.o ../../src/putLine/qsPutline.o
	echo "Compiling program..."
	$(CC) $(CFLAGS) -o quadSolver quadSolver.c ../../src/validate/qsValidate.o ../../src/solve/qsSolve.o ../../src/putLine/qsPutline.o ../../src/log/qsLog.o ../../src/getLine/qsGetLine.o

clean:
	echo "Cleaning Files..."
	rm  -f  *.o
