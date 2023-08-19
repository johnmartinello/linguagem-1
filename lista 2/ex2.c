#include <stdio.h>

int main() {

    int idade, anos, dias, meses;

    printf("idade em dias: ");
    scanf("%d", &idade);

    anos = idade/365;
    meses = (idade%365)/30;
    dias = idade - (anos*365) - (meses*30);

    printf("idade: %d ano(s), %d mes(es) e %d dia(s)", anos, meses, dias);



    return 0;
    }