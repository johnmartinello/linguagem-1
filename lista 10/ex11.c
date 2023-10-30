#include <stdio.h>

void elementosEmComum(int A[], int tamanhoA, int B[], int tamanhoB) {
    printf("Elementos de A que existem em B: ");
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 5, 7, 9, 1, 2};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    elementosEmComum(A, tamanhoA, B, tamanhoB);

    return 0;
}
