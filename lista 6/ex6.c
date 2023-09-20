#include <stdio.h>

int main(void) {
    
    int meses;
    float imposto, total;

    scanf("%f", &imposto);
    scanf("%d", &meses);

    if (imposto < 100){
        total = imposto + (meses * 2.0);
    }
    else if (imposto >= 100 && imposto <= 500){
        total = imposto + (meses * 4.0);
    }
    else{
        total = imposto +(meses * 8.0);
    }

    printf("total do imposto de %.2f com %d meses de atraso: %.2f", imposto, meses, total);
}