#include <stdio.h>

int main() {
    int A[5][5], S[5],soma = 0, count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("A[%d][%d]",i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j){
                soma += A[i][j];
                S[count] = A[i][j];
                count++;
            }
        }
    }

    printf("%d\n", soma);
    for (int i = 0; i < 5; i++){
        printf("%d ",S[i]);
    }

    return 0;
}


