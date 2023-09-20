#include <stdio.h>

int main() {

    int R[4][5], maior = 0, x,y;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            printf("R[%d][%d]: ",i, j);
            scanf("%d", &R[i][j]);
        } 
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (R[i][j] > maior){
                maior = R[i][j];
                x = i;
                y = j;
            }
            else{
                continue;
            }
        } 
    }
    printf("maior numero: %d. Posicao na matriz: (%d, %d)", maior, x+1, y+1);

    return 0;

}
