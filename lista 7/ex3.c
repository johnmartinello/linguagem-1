#include <stdio.h>

int main(void) {
    
    int n1;
    int *p1 = &n1;

    scanf("%d", &n1);

    if(*p1 % 2 == 0 ){
        printf("conteudo apontado %d eh par", *p1);
    }
    else{
        printf("conteudo apontado %d eh impar", *p1);
    }
    if(*p1 > 0 ){
        printf(" e positivo", *p1);
    }
    else{
        printf(" e negativo", *p1);
    }

}