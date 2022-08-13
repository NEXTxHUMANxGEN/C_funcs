/*
    Search module for the desired value from data array.

    Returned value must be:
        - "even"
        - ">= mean"
        - "<= mean + 3 * sqrt(variance)"
        - "!= 0"

        OR

        0
*/

#include <stdio.h>
#define NMAX 31

int input(int *a, int *n, int *res);
void output(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);


int main() {
    int n, data[NMAX];
    int res;
    switch (input(data, &n, &res)) {
        default:
            printf("0");
            break;
        case 11:
            printf("%d", res);
            break;
        case 21:
            printf("n/a\n");
            break;
        }
    return 0;
}

int input(int *a, int *n, int *res) {
    if (scanf("%d", n) == 1) {
        for (int *p = a; p - a < *n; p++) {
            if (scanf("%d", p) == 1) {
                res = p;
                if ((*res != 0) && (*res % 2 == 0) && ((double)res <= variance(a, n)) && ((double)res >= mean(a, n))) {
                    res = p;
                    return 11;
                    break;
                }
            } else {
                return 21;
            }
        }
    } else {
        return 21;
    }
}

double mean(int *a, int n) {
    double math_mean = 0;
    for (int *p = a; p - a < n; p++) {
        math_mean += *p;
    } math_mean = math_mean/n;
    return (double)math_mean;
}

double variance(int *a, int n) {
    double math_mean = 0;
    double math_variance = 0;
    for (int *p = a; p - a < n; p++) {
        math_mean += *p;
    } math_mean = math_mean/n;
    math_variance = math_mean / 2;
    return (double)math_variance;
}


void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
}



























































