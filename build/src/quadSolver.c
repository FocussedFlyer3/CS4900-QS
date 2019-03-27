#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../src/log/qsLog.h"
#include "../../src/getLine/qsGetLine.h"
#include "../../src/validate/qsValidate.h"
#include "../../src/solve/qsSolve.h"
#include "../../src/putLine/qsPutline.h"
#include "../../src/error/qsError.h"
#include "../../src/help/qsHelp.h"

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
 *   returns: 0 on successful
 */
int main(int argc, char const **argv) {

  //initialization
  char line[4098] = {'\0'}; //to store user's input
  double a, b, c;           //to store coefficients values
  double x1, x2;            //to store roots values
  int ret;                  //temporary store functions return value
  int index;                //temporary store help index value

  //LOG HEADER
  qsLog("------Quadratic Solver LOG FILE------");

  //program prompt
  fprintf(stdout, "\n--------Quadratic Solver--------\nThe program solves the following quadratic equations: \n\n\tax^2 +bx +c = 0\n\n");

    ret = qsGetLine(line,4098);
    if(ret < 0){
      qsError(ret);
      exit(-1);
    }

    //check if user inputs help function
    if(strstr(line,"help") != NULL){
      index  = 0;

        if(strncmp(line,"help qsGetLine",strlen("help qsGetLine")) == 0){
          index = 1;

        } else if (strncmp(line,"help qsLog",strlen("help qsLog")) == 0){
          index = 2;

        } else if (strncmp(line,"help qsValidate",strlen("help qsValidate")) == 0){
          index = 3;

        }

      qsHelp(index);
      return 0;
    }

    //validates input file and place seperate a,b,c values
    ret = qsValidate(line,4098, &a, &b, &c);
    if(ret < 0){
      qsError(ret);
      exit(-1);
    }

    //solve roots values
    ret = qsSolve(a, b, c, &x1, &x2);
    if(ret < 0){
      qsError(ret);
      exit(-1);
    }

    fprintf(stdout, "\nX1:%lf\tX2:%lf\n\n", x1,x2);

  return 0;
}
