#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include "qsValidate.h"
#include "../log/qsLog.h"

/*
 * Function: qsValidate
 * ----------------------------
 *   Validates the input values from a string (line) and returns coeeficients value a, b, c
 *
 *   line: a pointer to user's input
 *   nLine: number of characters in user's input
 *   a: float value to store coefficient a
 *   b: float value to store coefficient b
 *   c: float value to store coefficient c
 *
 *   returns: 0 on successful
 *            -1 when user's input contains anamoly:
 *               * NAN values
 *               * INFINITE values
 *               * SUBNORMAL values
 *               * OUT OF FLOAT RANGE values
 *               * <TO BE ADDED>
 */
int qsValidate(char *line, int nLine, double *a, double *b, double *c){

  if(line == NULL){   //check for empty input line
    fprintf(stderr, "[INVALID INPUT] input format: <a> <b> <c>\n");
    return -1;

  }

    //convert string to double
    int ret = sscanf(line,"%lf %lf %lf" , a, b, c);

    if(ret != 3){
      fprintf(stderr, "[INVALID INPUT] input format: <a> <b> <c>\n");
      return -1;
    }

    //check values
    register int aclass = fpclassify(*a);
    register int bclass = fpclassify(*b);
    register int cclass = fpclassify(*c);

    if (aclass == FP_NAN || bclass == FP_NAN || cclass == FP_NAN){
      fprintf(stderr, "Coefficients contain NAN values\n");
      return -1;

    } else if (aclass == FP_INFINITE || bclass == FP_INFINITE || cclass == FP_INFINITE){
      fprintf(stderr, "Coefficients contains INFINITE values\n");
      return -1;

    } else if (aclass == FP_SUBNORMAL || bclass == FP_SUBNORMAL || cclass == FP_SUBNORMAL){
      fprintf(stderr, "Coefficients contains DENORMALIZED values\n");
      return -1;

    } else if (aclass == FP_NORMAL && bclass == FP_NORMAL && cclass == FP_NORMAL){

          //check float range
          if ( (*a < FLT_MIN && *a < -FLT_MAX) || *a > FLT_MAX ){
            fprintf(stderr, "WARNING: Coefficient a(%f): %s\n", *a,"Out of Float Range");
            return -1;

          } else if ( (*b < FLT_MIN && *b < -FLT_MAX) || *b > FLT_MAX){
            fprintf(stderr, "WARNING: Coefficient b(%f): %s\n", *b,"Out of Float Range");
            return -1;

          } else if ( (*c < FLT_MIN && *c < -FLT_MAX) || *c > FLT_MAX){
            fprintf(stderr, "WARNING: Coefficient c(%f): %s\n", *c,"Out of Float Range");
            return -1;

          }

    }

    //LOGGING STARTS
      char buffer[1024];
      sprintf(buffer,"qsValidate(char *line, int nLine, double *a, double *b, double *c):\n \tline:%s \tnLine:%d\n \tReturns:\n \t\ta:%lf\n \t\tb:%lf\n \t\tc:%lf\n",line,nLine,*a,*b,*c);
      qsLog(buffer);
    //LOGGING ENDS

    return 0;

}
