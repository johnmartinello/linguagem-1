#include <stdio.h>

int main() {

    int vetor1[10], vetor2[10], vetor_final[20];

    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor2[i]);
    }
    
    int i = 0, j = 0;

    for (int k = 0; k < 20; k++) {
        if (i < 10 && (j >= 10 || vetor1[i] <= vetor2[j])) {
            vetor_final[k] = vetor1[i];
            i++;
        } else {
            vetor_final[k] = vetor2[j];
            j++;
        }
    }

    for (int i = 0; i < 20; i++){
        printf("%d ", vetor_final[i]);
    }
    return 0;

}
