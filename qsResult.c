/* Quadratic Solver */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Includes/qsPutline.h"
#include "Includes/qsLog.h"
#include "Includes/qsResult.h"

#define BUFF_SIZE 128

char *qsResult(int num_roots, double &x1, double &x2){
    //logs 
    qsLog("\tNumber of roots = %d  X1:%lf  X2: %lf\n", num_roots, x1, x2);
    qsPutline("\tNumber of roots = %d  X1:%lf  X2: %lf\n", num_roots, x1, x2);
    if (num_roots < 0 || num_roots > 2)
		return NULL;

    char *message = malloc(BUFF_SIZE * sizeof(char));
    
    if (num_roots == 1) {
		//store info to the message buffer;
    sprintf(message,
			"This is a single root;\nThe root is: %lf",
			x1);
	} else if (num_roots == 2) {
    //store info to the message buffer;
		sprintf(message,
			"There are 2 real roots;\nThe first root is: %lf\nThe second root is: %lf",
			x1,x2);
	} else {
    //store info to the message buffer;
		sprintf(message, "There are no real roots");
	}

   //logs
    qsLog("\nReturned parameter from qsResult()")
    qsLog("\t %s\n", message);
    //print in console;
    qsPutline("\t %s\n", message);
  
  return message;
}