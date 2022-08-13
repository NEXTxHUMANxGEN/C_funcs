#include "data_stat.h"


double mean(double *data, int n) {
    double math_mean = 0;
    for (double *p = data; p - data < n; p++) {
        math_mean += *p;
    } math_mean = math_mean/n;
    return (double)math_mean;
}

double variance(double *data, int n) {
    double math_mean = 0;
    double math_variance = 0;
    for (double *p = data; p - data < n; p++) {
        math_mean += *p;
    } math_mean = math_mean/n;
    math_variance = math_mean / 2;
    return (double)math_variance;
}


double max(double *data, int n) {
    double max;
    double *p = data;
    max = *p;
    for (*p = *data; p - data < n; p++) {
        if (*p > max) {
        max = *p;
        }
    } return max;
}

double min(double *data, int n) {
    double min;
    double *p = data;
    min = *p;
    for (*p = *data; p - data < n; p++) {
        if (*p < min) {
        min = *p;
        }
    } return min;
}
