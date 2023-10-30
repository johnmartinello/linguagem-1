#include <stdio.h>
#include <stdlib.h>


void Bissexto(int ano) {

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        printf("eh bissexto");
    }
    else{
        printf("nao eh bissexto");
    }
}

void main() {
    int ano;

    printf("ano: ");
    scanf("%d", &ano);

    Bissexto(ano);
    
}
