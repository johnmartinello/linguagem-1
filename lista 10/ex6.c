#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maior(char* string1, char* string2) {
    if (strlen(string1) > strlen(string2)){
        printf("string 1 eh maior");
    }
    else if(strlen(string1) < strlen(string2)){
        printf("string 2 eh maior");
    }
    else{
        printf("tamanhos iguais");
    }

}

int main(void) {
    int tamanho1, tamanho2;
    printf("tamanho string 1: ");
    scanf("%d", &tamanho1);
    getchar();
    char *string1 = (char *)malloc(sizeof(char) * (tamanho1 + 1));
    printf("Digite a string: ");
    fgets(string1, tamanho1 + 1, stdin);

    printf("tamanho string 2: ");
    scanf("%d", &tamanho2);
    getchar();
    char *string2 = (char *)malloc(sizeof(char) * (tamanho2 + 1));
    printf("Digite a string: ");
    fgets(string2, tamanho2 + 1, stdin);

    maior(string1, string2);

    free(string1);
    free(string2);
}
