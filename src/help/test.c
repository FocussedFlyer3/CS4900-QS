#include <math.h>
#include <stdio.h>
#include <string.h>
#include "qsHelp.h"

int main(int argc, char const **argv) {
  char buffer[100];
  int temp = 0;

  fprintf(stdout, "\nEnter Input:");

  fgets(buffer, 100, stdin);

  if(strncmp(buffer,"help qsGetLine",strlen("help qsGetLine")) == 0){
    temp = 1;

  } else if (strncmp(buffer,"help qsLog",strlen("help qsLog")) == 0){
    temp = 2;

  } else if (strncmp(buffer,"help qsValidate",strlen("help qsValidate")) == 0){
    temp = 3;

  }

  qsHelp(temp);

  return 0;
}
