#include <stdio.h>

int main() {

    int ano, mes, dia, final;

    printf("quantos anos de idade: ");
    scanf("%d", &ano);
    printf("quantos meses de idade: ");
    scanf("%d", &mes);
    printf("quantos dias de idade: ");
    scanf("%d", &dia);

    ano = ano * 365;
    mes = mes * 30;
    final = ano + mes + dia;

    printf("idade em dias eh %d", final);







    return 0;
    }