#include <stdio.h>

int main() {

    int n1, n2, soma;

    scanf("%d %d",&n1, &n2);
    
    soma = n1 + n2;

    printf("soma: %d", soma);
    if(soma % 2 == 0){
        printf(" e eh par");
    }
    else{
        printf(" e eh impar");
    }

    
    return 0;
    }