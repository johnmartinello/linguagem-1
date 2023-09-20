#include <stdio.h>

int main() {
    int matriz[5][5], vetor[5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d]: ", i);
            scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int v = 0; v < 5; v++){
                if(matriz[i][j] == vetor[v]){
                    printf("%d ", vetor[v]);
                }
            }
        }
    }

    return 0;
}