#include "data_io.h"
#include <stdio.h>
#include <stdlib.h>


void input(double* data, int *n) {
        for (double *p = data; p - data < *n; p++) {
            scanf("%lf", p);
            }
        }

void output(double *data, int n) {
    for (double *p = data; p - data < n; p++) {
        printf("%lf ", *p);
    }
}


