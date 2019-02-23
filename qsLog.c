/* Quadratic Solver */

#include <stdio.h>
#include "Includes/qsLog.h"

int qsLog(char *info){
    File *fp;
//open the file and append info to it
fp = fopen("log.txt"."a");

//function fprintf() log info to file
fprint(fp, "%s\n", info);

fclose(fp);

return 0;
 
}