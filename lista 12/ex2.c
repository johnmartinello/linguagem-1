#include <stdio.h>

struct Produto {
    char nome[50];
    float valor;

};


void main(){
    struct Produto produtos[10];
    for (int i = 0; i < 10; i++){
        fflush(stdin);
        printf("Digite o nome[%d]: ", i);
        gets(produtos[i].nome); 
        printf("Digite o valor: ");
        scanf("%f", &(produtos[i].valor));
    }

}