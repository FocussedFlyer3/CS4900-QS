#include <math.h>
#include <stdio.h>
#include "qsSolve.h"
#include "../log/qsLog.h"

/*
 * Function: qsSolve
 * ----------------------------
 *   Computes roots value (x1, x2) by solving the quadratic equation (ax^2 + bx + c)
 *
 *   x1 = ((-b) + sqrt( pow(b,2) - (4 * a * c)) / (2 * a))
 *   x2 = ((-b) - sqrt( pow(b,2) - (4 * a * c)) / (2 * a))
 *
 *   a: float value of first coefficient (ax^2)
 *   b: float value of second coefficient (bx)
 *   c: float value of third coeeficient (c)
 *
 *   returns: 0 on successful computation of roots value
 *            -1 when there is no real roots exist
 */
int qsSolve(double a, double b, double c, double *x1, double *x2){

    int numRoots = 0;
    double temp;
    int ret = 0;

    //check number of roots expected
    numRoots = (pow(b,2)) - (4 * a * c);

    //compute roots value
    if(numRoots == 0){
        *x1 = (-b)/(2*a);

    } else if (numRoots > 0){
        temp = sqrt(numRoots);

        if(temp < 0){
          return -1;
        }

        *x1 = ((-b) + temp) / (2*a);
        *x2 = ((-b) - temp) / (2*a);

    } else if (numRoots < 0){
        ret = -1;
    }

    //LOGGING STARTS
      char buffer[1024];
      sprintf(buffer,"qsSolve(double a, double b, double c, double *x1, double *x2):\n \ta:%lf\n \tb:%lf\n \tc:%lf\n \tnumRoots:%d\n \tReturn Value:\n \t\tx1:%lf\n \t\tx2:%lf\n", a, b, c, numRoots, *x1, *x2);
      qsLog(buffer);
    //LOGGING ENDS

    return ret;

}
