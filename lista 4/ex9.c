#include <stdio.h>

int main() {

    
    int numero[15];

    for (int i = 0; i < 15; i++){
        scanf("%d", &numero[i]);
    }

    for (int i = 0; i < 15; i++){
        if(numero[i] > 30){
            printf("%d ", numero[i]);
        }
    }
    

    
    return 0;

}
