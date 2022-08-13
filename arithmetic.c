#include <stdio.h>

int main() {
    float x, y;
    scanf("%f%f", &x, &y);
    int a = (int)x;
    int b = (int)y;
    if (a == x && b == y) {
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        if (a == 0 || b == 0) {
            printf("%d %d %d n/a\n", sum, diff, prod);
            return 0;
        } else {
            int quot = a / b;
            printf("%d %d %d %d\n", sum, diff, prod, quot);
            return 0;
        }
    } else {
        printf("n/a\n");
    }
}
