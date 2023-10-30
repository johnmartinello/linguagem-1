#include <stdio.h>

// Função para verificar se um número é primo
int isPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    int valor;

    while (1) {
        printf("Digite um valor (0 para sair): ");
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Por favor, insira um numero positivo ou zero.\n");
        } else if (valor == 0) {
            printf("Programa encerrado.\n");
            break;
        } else {
            if (isPrimo(valor)) {
                printf("%d eh primo.\n", valor);
            } else {
                printf("%d nao eh primo.\n", valor);
            }
        }
    }

    return 0;
}
