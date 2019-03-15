#include <stdio.h>
#include <stdlib.h>
#include "qsLog.h"

int qsLog(char *info){
FILE *fp;

//open the file and append info to it
fp = fopen("logFile.txt","a");

//function fprintf() log info to file
fprintf(fp, "%s\n", info);

fclose(fp);

return 0;

}
