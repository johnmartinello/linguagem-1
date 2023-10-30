#include <stdio.h>
#define pi 3.14

int main(void) {
    
    int a, r;
    int *pa = &a, *pr = &r;

    scanf("%d %d", &a, &r, &a, &r);

    int volume = pi * (*pr * *pr) * *pa;

    printf("%d", volume);

}