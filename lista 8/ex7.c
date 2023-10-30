#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        vetor[i] = rand();
    }


    int *pi = vetor;
    for (int i = 0; i < 10; i++) {
        printf("%d ", *pi);
        pi++;
    }
    
    printf("\n");

    int *pf = vetor + 9;
    for (int i = 0; i < 10; i++) {
        printf("%d ", *pf);
        pf--;
    }


    return 0;
}
