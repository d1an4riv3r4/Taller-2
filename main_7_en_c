#include <stdio.h>

int main() {
   
    float sueldobase, compdestino, compcrgoacademico, sueldobruto, impuestos, sueldoneto;
    int horasExtra, hijos, mayoresdependientes;

    printf("Sueldo base: ");
    scanf("%f", &sueldobase);

    printf("Complemento de destino: ");
    scanf("%f", &compdestino);

    printf("Complemento de cargo académico: ");
    scanf("%f", &compcargoacademico);

    printf("Horas extra realizadas: ");
    scanf("%d", &horasExtra);

    printf("Hijos: ");
    scanf("%d", &hijos);

    printf("Mayores: ");
    scanf("%d", &mayoresdependientes);
    sueldoBruto = sueldobase + compdestino + compcargoacademico + (23 * horasExtra);
    float porcentajeImpuestos = 24.0 - (2.0 * hijos) - (1.0 * mayoresdependientes);
    impuestos = sueldobruto * (porcentajeImpuestos / 100);

    sueldoneto = sueldobruto - impuestos;

    printf("\nCálculo de la nómina:\n");
    printf("Sueldo base: %.2f $\n", sueldobase);
    printf("Complemento de destino: %.2f $\n", compdestino);
    printf("Complemento de cargo académico: %.2f $\n", compcargoacademico);
    printf("Horas extra realizadas: %d\n", horasExtra);
    printf("Hijos: %d\n", hijos);
    printf("Mayores: %d\n", mayoresdependientes);
    printf("Sueldo bruto: %.2f $\n", sueldobruto);
    printf("Porcentaje de IRPF: %.0f%%\n", porcentajeImpuestos);
    printf("Retención por IRPF: %.2f $\n", impuestos);
    printf("Sueldo neto: %.2f $\n", sueldoneto);

    return 0;
}
