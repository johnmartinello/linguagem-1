#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int arvore_marciano, arvore_cacador, tentativas = 0, acertou = 0, *pointer_acertou = &acertou;
    int *pointer_arvore_marciano = &arvore_marciano, *pointer_arvore_cacador = &arvore_cacador, *pointer_tentativas = &tentativas;

    printf(" em qual arvore o marciano se escondeu(0-100): ");
    scanf("%d", &arvore_marciano);
    system("cls");

    do{
    printf(" qual arvore o cacador escolhe atirar:(0-100): ");
    scanf("%d", &arvore_cacador);

    if (*pointer_arvore_cacador == *pointer_arvore_marciano){
        printf("cacador acertou o marciano! Fim de jogo.");
        *pointer_acertou = 1;
        break;
    }
    else{
        if (*pointer_arvore_cacador > *pointer_arvore_marciano){
            printf("marciano diz: estou mais a esquerda.");
        }
        else{
            printf("marciano diz: estou mais a direita.");
        }
        (*pointer_tentativas)++;
    }
    
    }while(*pointer_tentativas < 5);
    if (!(*pointer_acertou)){
        printf("\nmarciano conseguiu voltar para marte! Fim de jogo");
    }
    

    return 0;

}
