#include <stdio.h>

int main() {

    int vet[5][5], falso = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("vetor[%d][%d]: ", i, j);
            scanf("%d", &vet[i][j]);
        }   
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                if (vet[i][j] == 1){
                    continue;
                }
                else{
                    falso = 1;
                    break;
                }
            }
            else{
                if(vet[i][j] == 0){
                    continue;
                }
                else{
                    falso = 1;
                    break;
                }
            }
        }
        if (falso){
            break;
        }
    }
    
    if (falso){
        printf("a matriz nao eh identidade\n");
    }
    else{
        printf("a matriz eh identidade\n");
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", vet[i][j]);
        }   
        printf("\n");
    }

    return 0;
    }