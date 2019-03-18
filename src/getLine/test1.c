#include <math.h>
#include <stdio.h>
#include "qsGetLine.h"

int main(int argc, char const **argv) {

  char buffer[100];

  qsGetLine(buffer,sizeof(buffer));

  fprintf(stdout, "%s\n", buffer);

  return 0;
}
