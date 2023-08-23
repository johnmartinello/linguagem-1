#include <stdio.h>
#include <math.h>

int main() {

    int min;
    float total;

    scanf("%d", &min);

    if (min > 3){
        total = 1.15 + ((min-3) * 0.26);
    }
    else{
        total = 1.15;
    }

    printf("quantia total a ser paga: %.2f", total);
    
    return 0;

}
