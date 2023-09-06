#include <stdio.h>

int main() {

    
    int numero[20], soma = 0, negativos = 0;

    for (int i = 0; i < 20; i++){
        scanf("%d", &numero[i]);
    }

    for (int i = 0; i < 20; i++){
        if(numero[i] > 0){
            soma += numero[i];
        }
        else if(numero[i] < 0){
            negativos++;
        }
    }
    printf("soma dos positivos: %d. Total negativos: %d", soma, negativos);

    
    return 0;

}
