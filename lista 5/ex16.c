#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], final[5];

    for (int i = 0; i < 10; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }


    for (int i = 0; i < 10; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }


    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) { 
            final[count] = vetor1[i] * vetor2[i + 1];
            count++;
        }
    }

    printf("vetor final: ");
    for (int k = 0; k < 5; k++) {
        printf("%d ", final[k]);
    }

    return 0;
}
