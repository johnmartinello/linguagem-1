#include <stdio.h>

int main() {
    int vetor[30];

    for (int i = 0; i < 30; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 29; i >= 0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
}


