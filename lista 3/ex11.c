#include <stdio.h>
#include <math.h>


int main() {

    int dias;

    scanf("%d", &dias);

    float total = (dias * 20.0) * 0.92;

    printf("quantia liquida a ser paga: %.2f", total);
    
    return 0;

}
