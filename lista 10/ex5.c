#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void acertou(int *x){
    printf("Excelente! Voce adivinhou o numero");
    (*x) = 1;

}
void menor(){
    printf("Muito baixo. Tente novamente: ");
}
void maior(){
    printf("Muito alto. Tente novamente: ");
    
}


int main(void) {
    srand(time(NULL));
    int valor = rand() % 51;

    int x = 0;
    int palpite;

    printf("Tenho um numero de 0 a 50.\nVoce pode adivinhar meu numero ?\nPor favor digite seu palpite:");
    while(x != 1){
        scanf("%d", &palpite);
        if(palpite == valor){
            acertou(&x);
        }
        else if(palpite < valor){
            menor();
        }
        else{
            maior();
        }
    }

    
}