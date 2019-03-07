#include <math.h>
#include <stdio.h>
#include <string.h>
#include "qsValidate.h"
#include "../getLine/qsGetLine.h"

int main(int argc, char const *argv[]) {

  char buffer[100] = {'\0'};
  double a;
  double b;
  double c;

  qsGetLine(buffer,100);

  int ret = qsValidate(buffer, strlen(buffer), &a, &b, &c);
  fprintf(stdout, "a:%f\tb:%f\tc:%f\n", a, b, c);

  fprintf(stdout, "RETURN: %d\n", ret);

  return 0;
}
