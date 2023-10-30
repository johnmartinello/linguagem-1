#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    
    int tamanho, positivo = 0, negativo = 0;
    scanf("%d", &tamanho);

    int *array = (int *)malloc(sizeof(int)*tamanho);

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < tamanho; i++){
        if(array[i]<0){
            negativo++;
        }
        else if(array[i]>0){
            positivo++;
        }
    }
    free(array);
    
    printf("%d %d", positivo, negativo);
}
