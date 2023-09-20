#include <stdio.h>

int main() {
    int P[3][3], soma_l, soma_c, diagonal_principal = 0;
    int permutacao = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("P[%d][%d]", i, j);
            scanf("%d", &P[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma_l = 0;
        soma_c = 0;
        for (int j = 0; j < 3; j++) {
            soma_l += P[i][j];
            soma_c += P[j][i];
            if (i == j && P[i][j] == 1) {
                diagonal_principal++;
            }
        }
        if (soma_l > 1 || soma_c > 1) {
            permutacao = 0; 
            break;
        }
    }

    if (diagonal_principal != 3) {
        permutacao = 0;
    }

    if (permutacao) {
        printf("matriz eh permutacao");
    } else {
        printf("matriz nao eh permutacao");
    }

    return 0;
}
