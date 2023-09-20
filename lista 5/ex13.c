#include <stdio.h>

int main() {
    int matriz[7][7];



    for (int i = 0; i < 7; i++) {
        for (int l = i; l < 7-i; l++) {
            for (int c = i; c < 7-i; c++){
                matriz[l][c] = 7 - i;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}


