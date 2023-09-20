#include <stdio.h>

int main() {
    
    char vet[20];

    fgets(vet, 20, stdin);

    for (int i = 0; i < 20; i++){
        printf("%c ", vet[i]);
    }
    

    return 0;
}
