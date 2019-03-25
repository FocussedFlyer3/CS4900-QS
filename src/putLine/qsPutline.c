#include <stdio.h>
#include <stdlib.h>
#include "qsPutline.h"
#include "../log/qsLog.h"

/*
 * Function: qsPutLine
 * ----------------------------
 *   This function prints user's string onto stdout
 *
 *   s: a pointer to the String to be printed onto stdout
 *
 *   returns: 0 on successful
 */
int qsPutline(char* s){

       puts(s);

    //LOGGING STARTS
      char buffer[1024];
      sprintf(buffer,"int qsPutLine(char* s):\n \ts:%s\n", s);
      qsLog(buffer);
    //LOGGING ENDS

    return 0;
}
