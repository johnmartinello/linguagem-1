#include <stdio.h>

int main() {
    int B[5][5],soma, maior, linha;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("B[%d][%d]",i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        soma = 0;
        for (int j = 0; j < 5; j++) {
            soma += B[i][j];
        }
        if(soma > maior){
            maior = soma;
            linha = i;
        }
        else{
            continue;
        }
    }

    printf("linha com maior soma: %d: %d",linha+1, maior);
    

    return 0;
}


