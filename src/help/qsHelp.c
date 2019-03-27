#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qsHelp.h"

/*
 * Function: qsHelp
 * ----------------------------
 *   This function provide necessary details on functions.
 *   Usage: help <functions name>
 *
 *   returns: 0 on successful
 *            -1 when function details do not exist
 */
int qsHelp(int index){

    int ret = 0;

    if(index == 0){
      fprintf(stdout, "\nQuadSolver, version 1.0\nAuthor: Chee Kong Wong, Honglin Wei\n\n\tFunctions\t\tDetails\n");
      fprintf(stdout, "\tqsGetline\t\tObtain user input from stdin\n");
      fprintf(stdout, "\tqsLog\t\t\tLogs necessary infomation into a 'logFile.txt' file\n");
      fprintf(stdout, "\tqsValidate\t\tValidates the input values from a string\n\n");
      return ret;
    }

    switch (index) {
      case 1: fprintf(stdout, "\nName:  qsGetline\nDescription:  Obtain user input from stdin\n\n\tline: a pointer to store inputs\nnLine: number of characters expected to be stored\n\nreturns: 0 on successful\n\n");
              break;
      case 2: fprintf(stdout, "\nName:  qsLog\nDescription:     Logs necessary infomation onto a file called 'logFile.txt' \n\n\tinfo: a pointer to the infomation to be printed\n\nreturns: 0 on successful\n\n");
              break;
      case 3: fprintf(stdout, "\nName:  qsValidate\nDescription: Validates the input values from a string (line) and returns coeeficients value a, b, c \n\nline: a pointer to user's input\nnLine: number of characters in user's input\na: float value to store coefficient a\nb: float value to store coefficient b\nc: float value to store coefficient c\n\nreturns: 0 on successful\n-1 when user's input is invalid\n* NAN values (-2)\n* INFINITE values (-3)\n* SUBNORMAL values (-4)\n* OUT OF FLOAT RANGE values (-5)\n\n\n");
              break;
      default: fprintf(stderr, "\nFunction details do not exist!\n"); ret = -1;
    }

    return ret;
}
