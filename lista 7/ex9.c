#include <stdio.h>
#define pi 3.14

int main(void) {
    
    int tempo, *pt = &tempo;
    float distancia, *pd = &distancia, total, *pto = &total;

    scanf("%d %f", &tempo, &distancia);

    *pto = (*pd * 1) + (*pt * 0.02);

    printf("%.2f", total);


}