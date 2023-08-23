#include <stdio.h>

int main() {

    int vet1[3][2], vet2[2][3], vet_resultante[3][3] ;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("vetor 1[%d][%d]: ", i, j);
            scanf("%d", &vet1[i][j]);
        }   
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("vetor 2[%d][%d]: ", i, j);
            scanf("%d", &vet2[i][j]);
        }   
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            vet_resultante[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                vet_resultante[i][j] += vet1[i][k] * vet2[k][j];
            }
        }
    }
    


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", vet_resultante[i][j]);
        }   
        printf("\n");
    }

    return 0;
    }