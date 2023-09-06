#include <stdio.h>

int main() {

    
    int numero[2], fib = 0;

    printf("numeros para iniciar a sequencia de RICCI: ");
    for (int i = 0; i < 2; i++){
        scanf("%d", &numero[i]);
    }

    printf("%d %d ", numero[0], numero[1]);
    for (int i = 0; i < 20; i++){
        fib = numero[0] + numero[1];
        numero[0] = numero[1];
        numero[1] = fib;

        printf("%d ", fib);
    }

    
    return 0;

}
