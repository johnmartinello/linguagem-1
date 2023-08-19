#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if (n%2 == 0){
        printf("%d eh par", n);
    }
    else{
        printf("%d eh impar", n);
    }
    if (n > 0){
        printf(" e positivo");
    }
    else if(n < 0){
        printf(" e negativo");
    }
    else{
        printf(" e zero");
    }

    return 0;
    }