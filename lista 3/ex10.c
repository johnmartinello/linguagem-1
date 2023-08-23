#include <stdio.h>
#include <math.h>


int main() {

    float temp;
    float tc, tf;

    int tipo;

    printf("celsius(1) ou fahrenheit(2): ");
    scanf(" %d", &tipo);

    printf("temperatura: ");
    scanf("%f", &temp);

    if (tipo == 1){
        tf = (temp * 9/5) + 32;
        printf("temperatura celsius para farenheit: %.2f", tf);
    }
    else {
        tc = (temp - 32) * 5/9;
        printf("temperatura farenheit para celsius: %.2f", tc);
    }
    
    return 0;

}
