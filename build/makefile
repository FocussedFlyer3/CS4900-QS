CC = gcc
CFLAGS = -Wall -pedantic -std=c99

build: src/quadSolver.o src/quadSolver.o ../src/error/qsError.o ../src/validate/qsValidate.o \
	../src/solve/qsSolve.o ../src/putLine/qsPutline.o ../src/log/qsLog.o ../src/getLine/qsGetLine.o \
	../src/help/qsHelp.o
	$(CC) $(CFLAGS) -o quadSolver src/quadSolver.o ../src/error/qsError.o ../src/validate/qsValidate.o \
	 ../src/solve/qsSolve.o ../src/putLine/qsPutline.o ../src/log/qsLog.o ../src/getLine/qsGetLine.o \
	 ../src/help/qsHelp.o

clean:
	cd src && $(MAKE) clean
