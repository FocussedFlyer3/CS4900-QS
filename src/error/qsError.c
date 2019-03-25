#include <stdio.h>
#include <string.h>
#include "qsError.h"
#include "../log/qsLog.h"

/*
 * Function: qsError
 * ----------------------------
 *   Receive an error number and prints necessary message
 *
 *   errorNum: a pointer to store inputs
 *
 *   returns: 0 when no errror message found
 *            -1 when error message prints
 */
int qsError(int errorNum){
  int ret = 0;

  switch(errorNum){
    case -2: fprintf(stderr, "Input contain NAN values\n"); goto DEFAULTCASE;
    case -3: fprintf(stderr, "Input contains INFINITE values\n"); goto DEFAULTCASE;
    case -4: fprintf(stderr, "Input contains DENORMALIZED values\n"); goto DEFAULTCASE;
    case -6: fprintf(stderr, "Failed to obtain user's input\n"); goto DEFAULTCASE;
    case -7: fprintf(stderr, "No real roots exits!\n"); goto DEFAULTCASE;
DEFAULTCASE:
    default: fprintf(stderr, "X1 & X2 cannot be determined\n\n"); ret = -1; break;
  }

  //Logging start//
    char buffer[1024];
    sprintf(buffer,"int qsError(int errorNum):\n \terrorNum: %d\n", errorNum);
    qsLog(buffer);
  //Logging end//

  return ret;
}
