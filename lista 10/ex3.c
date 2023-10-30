#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Inverter() {
    int tamanho;
    printf("tamanho string: ");
    scanf("%d", &tamanho);
    getchar();

    char *string = (char *)malloc(sizeof(char) * (tamanho + 1));
    
    printf("Digite a string: ");
    fgets(string, tamanho + 1, stdin);

    int i, j;
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char aux = string[i];
        string[i] = string[j];
        string[j] = aux;
    }

    return string;
}

int main(void) {
    char* reversedString = Inverter();
    
    printf("String invertida: %s\n", reversedString);
    free(reversedString); 

}
