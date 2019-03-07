#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include "qsValidate.h"

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
          if (*a < FLT_MIN || *a > FLT_MAX ){
            fprintf(stderr, "WARNING: Coefficient a(%f): %s\n", *a,"Out of Float Range");
            return -1;

          }else if (*b < FLT_MIN || *b > FLT_MAX){
            fprintf(stderr, "WARNING: Coefficient b(%f): %s\n", *b,"Out of Float Range");
            return -1;

          }else if (*c < FLT_MIN || *c > FLT_MAX){
            fprintf(stderr, "WARNING: Coefficient c(%f): %s\n", *c,"Out of Float Range");
            return -1;

          }

    }

    return 0;

}
