#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main() {
    int n, data[NMAX];
    if (input(data, &n) == 21) {
        printf("n/a\n");
    } else {
        squaring(data, n);
        output(data, n);
    }
    return 0;
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

void squaring(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        *p = *p * *p;
}
}

