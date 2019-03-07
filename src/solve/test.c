#include <math.h>
#include <stdio.h>
#include <string.h>
#include "qsSolve.h"

int main(int argc, char const *argv[]) {

  double a = 1;
  double b = -2;
  double c = -3;
  double x1;
  double x2;

  int ret = qsSolve(a, b, c, &x1, &x2);
  fprintf(stdout, "x1:%f\tx2:%f\n", x1,x2);
  fprintf(stdout, "RETURN: %d\n", ret);

  return 0;
}
