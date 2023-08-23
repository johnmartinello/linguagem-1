#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {

    float altura, raio;

    printf("altura e raio: ");
    scanf("%f %f", &altura, &raio);

    float volume = pi * (raio * raio) * altura;

    printf("volume do cilindro: %.2f", volume);

    return 0;

}
