#include <stdio.h>

int main() {
    int M[5][5], SL[5], SC[5], soma_l, soma_c, count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("M[%d][%d]",i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        soma_l = 0;
        soma_c = 0;
        for(int j = 0; j < 5; j++){
            
            soma_l += M[i][j];
        }
        SL[i] = soma_l;

        for(int j = 0; j < 5;j++){
            soma_c += M[j][i];
        }
        SC[i] = soma_c;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    printf("\nvetor soma linha:");
    for (int i = 0; i < 5; i++) {
        printf("%d ",SL[i]);
    }
    printf("\nvetor soma coluna:");
    for (int j = 0; j < 5; j++) {
            printf("%d ",SC[j]);
        }
    

    return 0;
}


