#include <stdio.h>
#include <stdlib.h>
#include "qsLog.h"

/*
 * Function: qsLog
 * ----------------------------
 *   Logs necessary infomation onto a file called 'logFile.txt'
 *
 *   info: a pointer to the infomation to be printed
 *
 *   returns: 0 on successful
 *            -1 on unsuccessful
 */
int qsLog(char *info){
FILE *fp;

//open the file and append info to it
fp = fopen("logFile.txt","a");

if(fp == NULL){
  return -1;
}

//function fprintf() log info to file
fprintf(fp, "%s\n", info);

fclose(fp);

return 0;

}
