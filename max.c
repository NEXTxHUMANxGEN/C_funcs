#include <stdio.h>

int main() {
    float x, y;
    scanf("%f%f", &x, &y);
    int a = (int)x;
    int b = (int)y;
    if (a == x && b == y) {
        if (b > a) {;
            printf("%d", b);
            return 0;
        } else {
            printf("%d", a);
            return 0;
        }
    } else {
        printf("n/a\n");
    }
}
