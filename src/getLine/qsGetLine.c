#include <stdio.h>
#include <string.h>
#include "qsGetLine.h"
#include "../log/qsLog.h"

/*
 * Function: qsGetLine
 * ----------------------------
 *   Obtain user input from stdin
 *
 *   line: a pointer to store inputs
 *   nLine: number of characters expected to be stored
 *
 *   returns: 0 on successful
 */
int qsGetLine(char *line, int nLine){

  //prompt for user input
  fprintf(stdout, "%s: ", "Enter value for a, b & c");

  //obtain user input
  fgets(line, nLine*sizeof(char), stdin);

  //Logging start//
    char buffer[1024];
    sprintf(buffer,"int qsGetLine(char *line, int nLine):\n \tline: %s \tnLine: %d\n \tReturn Value: %s", line, nLine, line);
    qsLog(buffer);
  //Logging end//

  return 0;
}
