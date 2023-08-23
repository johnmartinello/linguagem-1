#include <stdio.h>

int main() {

    int vet1[10],vet2[10],vetor_resultante[10], total = 0;

    for(int i = 0; i < 10; i++){
        printf("vetor 1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("vetor 2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }

    for(int i = 0; i < 10; i++){
        int encontrado = 0;
        for(int j = 0; j < 10; j++){
            if (vet1[i] == vet2[j]){
                encontrado = 1;
                break;
            }
        }
        if (!encontrado){
            printf("%d ", vet1[i]);
            total++;
        }
    }
    printf("\ntotal de valores diferentes: %d ", total);
        
    return 0;
    }