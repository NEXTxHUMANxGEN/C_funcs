#include "sort.h"
void sort(double *arr, int n) {
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
