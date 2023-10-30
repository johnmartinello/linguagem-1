#include <stdio.h>

int main(void) {
    
    int n1;
    int *p1 = &n1;
    
    scanf("%d", &n1);

    *p1 = *p1 * 10;

    printf("%d", n1);
}