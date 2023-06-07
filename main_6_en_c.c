#include <stdio.h>

int main() {
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f;

    f = 3 * (x + sigma * y / (x * x - y * y)) - lambda * (alfa - 13.7);

    printf("El valor de f es: %.2f\n", f);

    return 0;
}
