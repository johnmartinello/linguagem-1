#include <stdio.h>

int main() {

    int M[10][5], soma = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            printf("M[%d][%d]: ",i, j);
            scanf("%d", &M[i][j]);
        } 
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            soma += M[i][j];
        } 
    }
    printf("soma elementos matriz: %d", soma);

    return 0;

}
