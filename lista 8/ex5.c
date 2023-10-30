#include <stdio.h>
#include <stdlib.h>

int main (void){
        
        int array[] = {1,2,3,4,5,6,7,8,9,10};
        int *pc = array, *pf = array + 9, aux;

        for (int i = 0; i < 5; i++){
            aux = *pc;
            *pc = *pf;
            *pf = aux;

            pc++;
            pf--;
        }

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

        
    }