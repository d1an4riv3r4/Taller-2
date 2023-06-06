#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, anguloGrados, anguloRadianes, area;

    printf("Ingrese el valor del lado 1 del triángulo -> : ");
    scanf("%f", &l1);

    printf("Ingrese el valor del lado 2 del triángulo -> : ");
    scanf("%f", &l2);

    printf("Ingrese el ángulo entre los dos lados (en grados) -> : ");
    scanf("%f", &anguloGrados);

    anguloRadianes = anguloGrados * M_PI / 180.0;

    area = 0.5 * l1 * l2 * sin(anguloRadianes);
    printf("El área del triángulo es -> : %.2f\n", area);

    return 0;
}
