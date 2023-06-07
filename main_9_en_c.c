#include <stdio.h>
#include <math.h>

float calcularAreaTriangulo(float lado1, float lado2, float angulo);

int main() {
    float ladoA, ladoB, angulo, area;

    printf("Ingrese el lado A del triángulo -> : ");
    scanf("%f", &ladoA);
    printf("Ingrese el lado B del triángulo -> : ");
    scanf("%f", &ladoB);
    printf("Ingrese el ángulo entre los lados -> : ");
    scanf("%f", &angulo);

    area = calcularAreaTriangulo(ladoA, ladoB, angulo);

    printf("El área del triángulo es -> : %.2f\n", area);

    return 0;
}

float calcularAreaTriangulo(float ladoA, float ladoB, float angulo) {
    float area;

    
    angulo = angulo * M_PI / 180;

    area = 0.5 * ladoA * ladoB * sin(angulo);

    return area;
}
