#include <stdio.h>

int main() {

    float valor1, valor2, soma;
    int n = 1;

    while(n != 0){
        printf("primeiro valor: ");
        scanf("%f", &valor1);
        printf("segundo valor: ");
        scanf("%f", &valor2);

        soma = valor1+ valor2;
        printf("soma = %.2f\n", soma);
        
        printf("continuar?(digite 0 para terminar): ");
        scanf("%d", &n);
    }
   
    return 0;
    }