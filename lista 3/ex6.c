#include <stdio.h>

int main() {

    float n1, n2, n3, soma;

    printf("angulos triangulo: ");
    scanf("%f %f %f",&n1, &n2, &n3);
    
    if(n1+n2+n3 == 180){
        if(n1 == 90 ^ n2 == 90 ^ n3 == 90){
            printf("triangulo eh retangulo");
        }
        else{
            printf("triangulo nao eh retangulo ou invalido (caso 2 angulos = 90)");
        }
    }
    else{
        printf("soma dos angulos internos precisa fechar 180");
    }
   


    
    return 0;
    }