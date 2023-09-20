#include <stdio.h>

int main() {
    int A[2][3], B[3][2], P[2][2] = {0}, linha, coluna;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int r = 0; r < 2; r++) {
            int sum = 0;
            for (int j = 0; j < 3; j++) {
                sum += A[i][j] * B[j][r];
            }
            P[i][r] = sum;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
