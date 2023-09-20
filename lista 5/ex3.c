#include <stdio.h>

int main() {
    int matriz[15][15];
    int repetidos[15][15] = {0};
    int i, j;
    
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            printf("matriz[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            if (repetidos[i][j] == 0) {
                int k, l;
                int count = 1; 

                for (k = i; k < 15; k++) {
                    for (l = 0; l < 15; l++) {
                        if (k == i && l <= j) {
                            continue;
                        }
                        if (matriz[k][l] == matriz[i][j]) {
                            count++;
                            repetidos[k][l] = 1;
                        }
                    }
                }

                if (count > 1) {
                    printf("%d: %d vezes.\n", matriz[i][j], count);
                }
            }
        }
    }

    return 0;
}
/* em python usando dicionario
matriz = [[1, 2, 15], [1, 2, 15], [1, 2, 15]]
map = {}

for i in range(len(matriz)):
    for j in range(len(matriz[0])):
        if matriz[i][j] in map:
            map[matriz[i][j]] += 1
        else:
            map[matriz[i][j]] = 1

print(map)
*/