#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../src/log/qsLog.h"
#include "../../src/getLine/qsGetLine.h"
#include "../../src/validate/qsValidate.h"
#include "../../src/solve/qsSolve.h"
#include "../../src/putLine/qsPutline.h"
#include "../../src/error/qsError.h"

/*
 * Function: main
 * ----------------------------
 *   This is the main executable code for quadSolver.
 *   It takes in values for coefficients a, b & c to solve the quadratic equations.
 *
 *                    ax^2 +bx +c = 0
 *
 *   Necessary error and warnings are printed when necessary.
 *   Program exits on 'exit' input command.
 *
 *   returns: 1 on successful
 */
int main(int argc, char const **argv) {

  //initialization
  char line[4098] = {'\0'}; //to store user's input
  double a, b, c;           //to store coefficients values
  double x1, x2;            //to store roots values
  int ret;                  //temporary store functions return value

  //LOG HEADER
  qsLog("------Quadratic Solver LOG FILE------");

  //program prompt
  fprintf(stdout, "\n--------Quadratic Solver--------\nThe program solves the following quadratic equations: \n\n\tax^2 +bx +c = 0\n\n");

  while((ret = qsGetLine(line,4098)) > 0){
    if(ret < 0){
      qsError(ret);
      continue;

    } else if (strncmp(line, "exit",strlen("exit")) == 0){
      fprintf(stdout, "Program Exits!\n\n");
      break;

    }

    //validates input file and place seperate a,b,c values
    ret = qsValidate(line,4098, &a, &b, &c);
    if(ret < 0){
      qsError(ret);
      continue;
    }

    //solve roots values
    ret = qsSolve(a, b, c, &x1, &x2);
    if(ret < 0){
      qsError(ret);
      continue;
    }

    fprintf(stdout, "X1:%lf\tX2:%lf\n\n", x1,x2);
  }

  return 0;
}
