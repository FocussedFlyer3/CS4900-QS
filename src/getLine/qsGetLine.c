#include <stdio.h>
#include <string.h>
#include "qsGetLine.h"

int qsGetLine(char *line, int nLine){

  //prompt for user input
  fprintf(stdout, "%s: ", "Enter value for a, b & c");

  //obtain user input
  fgets(line, nLine*sizeof(char), stdin);

  return 0;
}
