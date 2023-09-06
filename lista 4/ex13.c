#include <stdio.h>

int main() {

    
    int tempo;
    float km, valor;

    printf("distancia do taxi em km: ");
    scanf("%f", &km);

    printf("tempo da viagem de taxi em segundos: ");
    scanf("%d", &tempo);    
    
    valor = (tempo*0.02) + (km * 1.00);

    printf("valor total da corrida: %.2f", valor);

    return 0;

}
