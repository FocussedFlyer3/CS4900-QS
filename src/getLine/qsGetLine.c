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
 *   returns: 1 on successful
 *            -6 on unsuccesful
 */
int qsGetLine(char *line, int nLine){

  //prompt for user input
  fprintf(stdout, "\nEnter value for a, b & c: ");

  //obtain user input
  char * ret = fgets(line, nLine*sizeof(char), stdin);

  //Logging start//
    char buffer[1024];
    sprintf(buffer,"int qsGetLine(char *line, int nLine):\n \tline: %s \tnLine: %d\n \tReturn Value: %s", line, nLine, line);
    qsLog(buffer);
  //Logging end//

  if(ret == NULL){
    return -6;

  } else {
    return 1;

  }

}
