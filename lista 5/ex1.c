#include <stdio.h>

int main() {

    int vetor[10], posi = 0, neg = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0){
            posi++;
        }
        else if (vetor[i] < 0){
            neg++;
        }
    }
    printf("positivo(s): %d. Negativo(s): %d", posi, neg);
    
    return 0;

}
