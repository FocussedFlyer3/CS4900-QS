#include <math.h>
#include <stdio.h>
#include "qsSolve.h"

int qsSolve(double a, double b, double c, double *x1, double *x2){

    int numRoots = 0;
    double temp;

    //check number of roots expected
    numRoots = (pow(b,2)) - (4 * a * c);
    fprintf(stdout, "ROOTS: %d\n", numRoots);

    if(numRoots == 0){
        *x1 = (-b)/(2*a);

    } else if (numRoots > 0){
        temp = sqrt(numRoots);

        if(temp < 0){
          return -1;
        }

        *x1 = ((-b) + temp) / (2*a);
        *x2 = ((-b) - temp) / (2*a);

    }

    return 0;

}
