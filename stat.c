#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max,
                   int min,
                   double mean,
                   double variance);

int main() {
    int n, data[NMAX];
    if (input(data, &n) == 21) {
        printf("n/a\n");
    } else {
    output(data, n);
    output_result(max(data, n),
                  min(data, n),
                  mean(data, n),
                  variance(data, n));
    }return 0;
}

int input(int *a, int *n) {
    if (scanf("%d", n) == 1) {
        for (int *p = a; p - a < *n; p++) {
            if (scanf("%d", p) != 1) {
                return 21;
                break;
            }
        }
    } else {
        return 21;
    } return 0;
}

void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
}

void output_result(int max,
                   int min,
                   double mean,
                   double variance) {
        printf("\n%d %d %lf %lf\n", max, min, mean, variance);
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


int max(int *a, int n) {
    int max;
    int *p = a;
    max = *p;
    for (int *p = a; p - a < n; p++) {
        if (*p > max) {
        max = *p;
        }
    } return max;
}

int min(int *a, int n) {
    int min;
    int *p = a;
    min = *p;
    for (int *p = a; p - a < n; p++) {
        if (*p < min) {
        min = *p;
        }
    } return min;
}














