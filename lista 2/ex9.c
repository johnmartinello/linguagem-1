#include <stdio.h>

int main() {

    int vet1[10],vet2[10],vetor_resultante[20];

    for(int i = 0; i < 10; i++){
        printf("vetor 1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("vetor 2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }

    for(int i = 0; i < 10; i++){
        vetor_resultante[i] = vet1[i];
    }
    for(int i = 0; i < 10; i++){
        vetor_resultante[10+i] = vet2[i];
    }
    for(int i = 0; i < 20; i++){
        printf("%d ", vetor_resultante[i]);
        
    }





    return 0;
    }