#include <stdio.h>

int main() {

    int cod, qnt;
    float total;

    printf("codigo: ");
    scanf("%d", &cod);
    printf("quantidade: ");
    scanf("%d", &qnt);
    
    if (cod == 100){
        total = 1.20 * qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else if (cod ==101){
        total = 1.30 * qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else if (cod ==102){
        total = 1.50* qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else if (cod ==103){
        total = 1.2* qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else if (cod ==104){
        total = 1.30* qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else if (cod ==105){
        total = 1* qnt;
        printf("%d codigo %d: R$%.2f",qnt, cod, total);
    }
    else{
        printf("codigo invalido");
    }





    return 0;
    }