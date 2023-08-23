#include <stdio.h>
#include <math.h>

int main() {

    float salario, ajuste;

    scanf("%f", &salario);

    ajuste = salario * 1.07;
    printf("reajuste do primeiro ano: %.2f\n", ajuste);

    ajuste = ajuste * 1.06;
    printf("reajuste do segundo ano: %.2f\n", ajuste);

    ajuste = ajuste * 1.05;
    printf("reajuste do terceiro ano: %.2f", ajuste);
    
    return 0;

}
