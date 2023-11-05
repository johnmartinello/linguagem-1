#include <stdio.h>
#include <stdlib.h>

 int* alocar() {
    int* x = (int*)malloc(sizeof(int));

    return x;
}

int main() {
    
    int* x = alocar();
    int* y = alocar();

    scanf("%d", x);
    scanf("%d", y);

    int soma = *x + *y;

    printf("soma: %d + %d =  %d",*x, *y, soma);
    
    free(x);
    free(y);
    

    return 0;
}
