#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Caracoroa(){
    int num = rand() % 2;

    return num;
}

int main(void) {
    srand(time(NULL));

    int cara = 0, coroa = 0, x;

    for (int i = 0; i < 100; i++){
        x = Caracoroa();
        if (x == 1){
            coroa++;
        }
        else{
            cara++;
        }
    }

    printf("cara: %d. Coroa: %d", cara, coroa);
}