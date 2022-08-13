#include <stdio.h>
#define NMAX 10

int input(int *a, int *n, int *c);
void output(int *arr, int n);
void insert_shift(int *arr, int n, int c, int *buffer);
int main() {
    int n, data[NMAX], c, buffer[NMAX];
    if (input(data, &n, &c) == 21) {
        printf("n/a\n");
    } else {
        insert_shift(data, NMAX, c, buffer);
    output(buffer, NMAX);
    }return 0;
}
int input(int *a, int *n, int *c) {
    
    if ((scanf("%d", n) == 1) && (*n <= NMAX)) {
        for (int *p = a; p - a < *n; p++) {
            if (scanf("%d", p) != 1) {
                return 21;
                break;
            }
        }
    } else {
        return 21;

    } if (scanf("%d", c) != 1) {
    return 21;
    }
    return 0;
}
void insert_shift(int *arr, int n, int c, int *buffer) {

    for (int i = 0; i < n-1; i++) {
        if (c >= 0){
            int c_x = i - c;
            if (c_x < 0) {
                c_x += n - 1;
            }
            buffer[c_x] = arr[i];
        } else {
            int c_x = i + c;
            if (c_x > 0) {
                c_x -= n - 1;
            }
            buffer[c_x] = arr[i];
        }
    }
}
void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
}
