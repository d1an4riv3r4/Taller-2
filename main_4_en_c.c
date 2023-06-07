#include <stdio.h>

int main() {
    float nota1, nota2, notafinal;
    float notapracticas, notaextra;
    float notaFinal;

    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &nota1);

    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &nota2);

    printf("Ingrese la nota del examen final: ");
    scanf("%f", &notafinal);

    printf("Ingrese la nota de las prácticas: ");
    scanf("%f", &notapracticas);

    printf("Ingrese la nota de la actividad adicional: ");
    scanf("%f", &notaextra);

  
    notaFinal = (nota1 + nota2 + notafinal + notapracticas + notaextra) / 5.0;

    printf("La nota final es: %.2f\n", notaFinal);

    return 0;
}
