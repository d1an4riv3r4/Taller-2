#include <stdio.h>

int main() {
    float r, a, b, c, d;
    float resultado;

    printf("Ingrese el valor de r: ");
    scanf("%f", &r);
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    printf("Ingrese el valor de d: ");
    scanf("%f", &d);

    resultado = (4.0 / 3.0 * (r + 34)) - (9.0 * (a + b * c)) + ((3.0 + d * (2.0 + a)) / (a + b * d));

  
    printf("El resultado de la expresion es: %.2f\n", resultado);

    return 0;
}
