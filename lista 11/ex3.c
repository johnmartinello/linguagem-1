#include <stdio.h>

void incrementar(int *valor) {
    printf("(funcao) valor  = %d\n", *valor);
    (*valor)++;
    printf("(funcao) valor = %d\n", *valor);
}

int main() {
    int x;
    scanf("%d", &x);
    
    incrementar(&x);
    
    printf("valor: %d\n", x);
    return 0;
}
