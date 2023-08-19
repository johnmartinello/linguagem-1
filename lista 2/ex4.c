#include <stdio.h>

int main() {

   
    int n, h, min, seg;

    printf("tempo de duracao em segundos: ");
    scanf("%d", &n);

    h = (n/60)/60;
    min = (n/60)-(h*60);
    seg = n - ((h*60)*60) - (min*60);

    printf("tempo: %d hora(s), %d minuto(s) e %d segundo(s)", h, min, seg);

    return 0;
    }