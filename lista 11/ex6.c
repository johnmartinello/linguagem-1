#include <stdio.h>
#include <stdlib.h>

int* alocar(int tamanho){
    int* x = (int*)malloc(tamanho * sizeof(int));

    return x;
}

void main(){
    int tamanho;
    scanf("%d", &tamanho);

    int* array = alocar(tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("arr[%d]", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);
    }
}