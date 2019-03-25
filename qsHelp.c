#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * qsHelp func
 * suppoed be used in the main or test function, give a user menu(ie. 1. qsPutline 2.xx if(user's input is 1, call qsHelp(1)))
 * 
 * **/
int qsHelp(int index){
    
    if(index ==1){
     fprintf(stdout, "\nName:  qsPutline\nDesciption:   This function prints user's string onto stdout \n\n
     t s: a pointer to the String to be printed onto stdout\n\n
     returns: 0 on successful\n\n");
    }
    if(index ==2){
     fprintf(stdout, "\nName:  qsGetline\nDecription:   Obtain user input from stdin \n\n\tline: a pointer to store inputs\n
     nLine: number of characters expected to be stored\n\nreturns: 0 on successful\n\n");
    }
    if(index ==3){
     fprintf(stdout, "\nName:  quadSolver\nDescription:   The main program for quadratic solver\n\n\t print out result\n\n");
    }
    if(index ==4){
     fprintf(stdout, "\nName:  qsLog\nDescription:     Logs necessary infomation onto a file called 'logFile.txt' \n\n\tinfo: a pointer to the infomation to be printed\n\n
     returns: 0 on successful\n\n");
    }
    if(index ==5){
     fprintf(stdout, "\nName:  qsValidate\nDescription: Validates the input values from a string (line) and returns coeeficients value a, b, c \n\n\t
     line: a pointer to user's input\n
     nLine: number of characters in user's input\n
     a: float value to store coefficient a\n
     b: float value to store coefficient b\n
     c: float value to store coefficient c\n\n
     returns: 0 on successful\n
     -1 when user's input contains anamoly:\n
     * NAN values\n
     * INFINITE values\n
     * SUBNORMAL values\n
     * OUT OF FLOAT RANGE values\n
     \n\n");
    }
   