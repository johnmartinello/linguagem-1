#include <stdio.h>

int main() {

    
    int numero[10], soma_par = 0, produto_impar = 1;

    for (int i = 0; i < 10; i++){
        scanf("%d", &numero[i]);
    }

    for (int i = 0; i < 10; i++){
        if(numero[i] % 2 == 0){
            soma_par += numero[i];
        }
         else if(numero[i] % 2 != 0){
            produto_impar *= numero[i];
        }
    }
    printf("soma dos paras: %d. produto impares: %d", soma_par, produto_impar);
    

    
    return 0;

}
