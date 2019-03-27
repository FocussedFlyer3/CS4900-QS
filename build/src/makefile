CC = gcc
CFLAGS = -Wall -pedantic -std=c99

quadSolver.o: quadSolver.c
	$(CC) -c quadSolver.c

compile:quadSolver.c ../../src/log/qsLog.o ../../src/getLine/qsGetLine.o \
	../../src/error/qsError.o ../../src/validate/qsValidate.o ../../src/solve/qsSolve.o \
	../../src/putLine/qsPutline.o ../../src/help/qsHelp.o
	$(CC) $(CFLAGS) -o quadSolver quadSolver.c ../../src/error/qsError.o ../../src/validate/qsValidate.o \
	 ../../src/solve/qsSolve.o ../../src/putLine/qsPutline.o ../../src/log/qsLog.o ../../src/getLine/qsGetLine.o \
	 ../../src/help/qsHelp.o

test: ../quadSolver
	cd ../sTest; ./test.sh

clean:
	$(info Cleaning Files...)
	rm  -f  *.o
	cd ../../src && $(MAKE) clean
