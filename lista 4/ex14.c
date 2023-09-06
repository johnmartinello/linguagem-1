#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int arvore_marciano, arvore_cacador, tentativas = 0;

    printf(" em qual arvore o marciano se escondeu(0-100): ");
    scanf("%d", &arvore_marciano);
    system("cls");

    do{
    printf(" qual arvore o cacador escolhe atirar:(0-100): ");
    scanf("%d", &arvore_cacador);

    if (arvore_cacador == arvore_marciano){
        printf("cacador acertou o marciano! Fim de jogo.");
        break;
    }
    else{
        if (arvore_cacador > arvore_marciano){
            printf("marciano diz: estou mais a esquerda.");
        }
        else{
            printf("marciano diz: estou mais a direita.");
        }
        tentativas++;
    }
    
    }while(tentativas < 5);
    printf("\nmarciano conseguiu voltar para marte! Fim de jogo");

    return 0;

}
