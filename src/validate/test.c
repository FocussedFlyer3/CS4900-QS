#include <math.h>
#include <stdio.h>
#include <string.h>
#include "qsValidate.h"
#include "../getLine/qsGetLine.h"

int main(int argc, char const **argv) {

  char buffer[4096] = {'\0'};
  double a;
  double b;
  double c;


  //obtain user's input
  qsGetLine(buffer,4096);

  while(strstr(buffer, "ZZZ") == NULL){

    //validate user's input and place valid coefficient values in a,b,c
    int ret = qsValidate(buffer, strlen(buffer), &a, &b, &c);

    //print values
    fprintf(stdout, "a:%f\tb:%f\tc:%f\n", a, b, c);
    fprintf(stdout, "RETURN: %d\n", ret);

    //obtain user's input
    qsGetLine(buffer,4096);

  }

  fprintf(stdout, "Program exiting.. \n");

  return 0;
}
