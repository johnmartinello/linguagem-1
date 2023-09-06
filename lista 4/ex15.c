#include <stdio.h>

int main() {

    
    int cod, quantidade;
    float total = 0;

    do{
        printf("codigo produto: ");
        scanf("%d", &cod);
        if (cod == 99){
            break;
        }
        printf("quantidade produto: ");
        scanf("%d", &quantidade);

        switch (cod){
            case 1:
                total += (quantidade* 2.50);
                break;
            case 2:
                total += (quantidade* 3.50);
                break;
            case 3:
                total += (quantidade* 4.50);
                break;
            case 4:
                total += (quantidade* 10.0);
                break;
            case 5:
                total += (quantidade* 2.0);
                break;
        }
    }while(cod !=99);

    printf("total a pagar: %.2f", total);

}
