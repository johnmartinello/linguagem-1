#include <stdio.h>

int main() {

    int idade;

    printf("digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade < 5){
        printf("menos que 5 anos");
    }
    else if (idade >= 5 && idade <= 7){
        printf("categoria infantil A = 5 - 7 anos");
    }
    else if (idade >= 8 && idade <= 10){
        printf("categoria infantil B = 8 - 10 anos");
    }
   else if (idade >= 11 && idade <= 13){
        printf("categoria Juvenil A = 11 - 13 anos");
    }
    else if (idade >= 14 && idade <= 17){
        printf("categoria Juvenil B = 14 - 17 anos");
    }
    else{
                printf("categoria adulto = maiores de 18 anos");

    }

    return 0;
    }