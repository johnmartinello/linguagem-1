#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int tamanho1, tamanho2;
    scanf("%d", &tamanho1);
    scanf("%d", &tamanho2);

    int *vetor1 = (int *)malloc(sizeof(int) * tamanho1);
    int *vetor2 = (int *)malloc(sizeof(int) * tamanho2);

    for (int i = 0; i < tamanho1; i++) {
        vetor1[i] = rand() % 100; 
    }
    for (int i = 0; i < tamanho2; i++) {
        vetor2[i] = rand() % 100; 
    }
    int soma = 0;
    if (tamanho1 > tamanho2){
        for (int i = 0; i < tamanho2; i++){
            soma = vetor1[i] + vetor2[i];
            printf("%d ", soma);
        }
    }
    else{
        for (int i = 0; i < tamanho1; i++){
            soma = vetor1[i] + vetor2[i];
            printf("%d ", soma);
        }
    }
    free(vetor1);
    free(vetor2);
}


