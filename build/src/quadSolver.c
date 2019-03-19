#include <stdio.h>
#include <stdlib.h>
#include "../../src/log/qsLog.h"
#include "../../src/getLine/qsGetLine.h"
#include "../../src/validate/qsValidate.h"
#include "../../src/solve/qsSolve.h"
#include "../../src/putLine/qsPutline.h"

int main(int argc, char const **argv) {

  //initialization
  char line[4098] = {'\0'}; //to store user's input
  double a, b, c;           //to store coefficients values
  double x1, x2;            //to store roots values

  //LOG HEADER
  qsLog("------Quadratic Solver LOG FILE------");

  //program prompt
  fprintf(stdout, "\n--------Quadratic Solver--------\nThe program solves the following quadratic equations: \n\n\tax^2 +bx +c = 0\n\n");

  //get user's input
  qsGetLine(line,4098);

  //validates input file and place seperate a,b,c values
  qsValidate(line,4098, &a, &b, &c);

  //solve roots values
  qsSolve(a, b, c, &x1, &x2);

  fprintf(stdout, "X1:%lf\tX2:%lf\n\n", x1,x2);

}
