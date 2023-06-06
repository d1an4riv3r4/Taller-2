#include <stdio.h>
#include <math.h>

int main() {
    float capital, intanual, plazo;
    float cuotamensual, totalpagado, amortizacion, intereses;
    float ratio;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &capital);
    printf("Ingrese el interés anual: ");
    scanf("%f", &intanual);
    printf("Ingrese los años del préstamo: ");
    scanf("%f", &plazo);

    
    ratio = intanual / 12.0;

   
    cuotamensual = capital * ratio / 100.0 * (1 - pow(1 + ratio / 100.0, -plazo));

    
    totalpagado = cuotamensual * plazo;

    amortizacion = capital;
    intereses = totalpagado - amortizacion;

    printf("\nCuota mensual: %.2f\n", cuotamensual);
    printf("Total pagado: %.2f\n", totalpagado);
    printf("Cantidad de amortización: %.2f\n", amortizacion);
    printf("Cantidad de intereses: %.2f\n", intereses);

    return 0;
}
