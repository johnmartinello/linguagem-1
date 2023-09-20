#include <stdio.h>

int main() {
    int M1[5][5];
    int M2[5][5];
    int V[25];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("M1[%d][%d]",i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("M2[%d][%d]",i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int encontrado = 0;

            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 5; l++) {
                    if (M2[k][l] == M1[i][j]) {
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado) {
                    break;
                }
            }
            if (!encontrado) {
                V[count] = M1[i][j];
                count++;
            }
        }
    }

    // Mostra o vetor V resultante
    printf("Valores em M1 que nao existem em M2:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}


