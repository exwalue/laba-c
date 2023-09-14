#include <stdio.h>
int main() {
    int a, b, c, x;
    printf("Input numbers a, b, c, x: ");
    scanf("%d %d %d %d", &a, &b, &c, &x);
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (min <= x && min % 7 == 0) {
        printf("Smallest: %d\n", min);
    } else {
        int sum = a + b + c - min;
        float result = (float)min / sum;
        printf("Chastnoe: %f\n", result);
    }
    return 0;
}