#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int vetor[10];
    int par = 0;

    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; 

        if (vetor[i] % 2 == 0) {
            par++;
        }
    }

    int *vetor_pares = (int *)malloc(sizeof(int) * par);

    int aux = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            vetor_pares[aux] = vetor[i];
            aux++;
        }
    }

    for (int i = 0; i < par; i++) {
        printf("%d ", vetor_pares[i]);
    }
    free(vetor_pares);

    return 0;
}
