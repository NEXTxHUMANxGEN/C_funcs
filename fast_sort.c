#include <stdio.h>
#define NMAX 10

int input(int *a, int n);
void output(int *arr, int n);
void insert_sort(int *arr, int n);

int main() {
    int n, data[NMAX];
    if (input(data, NMAX) == 21) {
        printf("n/a\n");
    } else {
        insert_sort(data, NMAX);
    output(data, NMAX);
    }return 0;
}

int input(int *a, int n) {
        for (int *p = a; p - a < n; p++) {
            if (scanf("%d", p) != 1) {
                return 21;
                break;
            }
        } return 0;
    }
void insert_sort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int k = i;
        while (k > 0 && arr[k-1] > arr[k]) {
            int tmp = arr[k-1];
            arr[k-1] = arr[k];
            arr[k] = tmp;
            k -= 1;
        }
    }
}
void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
}





