#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Ingrese el tiempo transcurrido en segundos: ");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos_restantes = segundos%3600;
    minutos = segundos_restantes/60;
    segundos_restantes = segundos_restantes%60;

    printf("Equivalente: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos_restantes);

    return 0;
}
