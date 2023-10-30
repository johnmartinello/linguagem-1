#include <stdio.h>

int main(void) {
    
    int x, y;
    int *p1 = &x, *p2 = &y;

    scanf("%d %d", &x, &y);

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("x: %d y: %d", x, y);

}