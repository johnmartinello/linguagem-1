#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Area(float altura, float base) {

    float area = base * altura;

    return area;
}

void main() {
    float base, altura;

    printf("base: ");
    scanf("%f", &base);

    printf("altura: ");
    scanf("%f", &altura);

    float area = Area(base, altura);
    printf("area: %.2f", area);
}
