#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float celsius(float temp) {

    float celsius = (temp-32.0) * (5.0/9.0);

    return celsius;
}

void main() {
    float temp;

    scanf("%f", &temp);
    float temp_celsius = celsius(temp);

    printf("celsius: %.2f", temp_celsius);
}
