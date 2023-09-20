#include <stdio.h>

int main(void) {
    
    int cod, gordo_cod, magro_cod, cont;
    float peso, gordo, magro, media;

    cont = media = 0;

    scanf("%d", &cod);
    scanf("%f", &peso);

    gordo_cod = magro_cod = cod;
    gordo = magro = peso;
    media += peso;
    cont++;

    while(cod != 0){
        scanf("%d", &cod);
        scanf("%f", &peso);

        if (cod == 0){
            break;
        }

        if (peso > gordo){
            gordo = peso;
            gordo_cod = cod;

        }
        if (peso < magro){
            magro = peso;
            magro_cod = cod;
        }

        media += peso;
        cont++;
    }

    printf("media peso bois: %.2f\n", media/cont);

    printf("boi mais gordo: Cod(%d) peso: %.2f\n", gordo_cod, gordo);
    printf("boi mais magro: Cod(%d) peso: %.2f", magro_cod, magro);

}