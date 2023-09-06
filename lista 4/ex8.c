#include <stdio.h>

int main() {

    char pessoa[][50] = {"jonas","carlos","roberto","julia","robson"};
    int idade[] = {22, 23, 42, 23, 19};
    char sexo[] = {'h','h','h','m','h'};

    for(int i = 0; i < 5; i++){
        if(sexo[i] == 'h' && idade[i] > 21){
            printf("%s: %d anos\n", pessoa[i], idade[i]);
        }
    }

    
    return 0;

}
