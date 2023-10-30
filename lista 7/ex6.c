#include <stdio.h>

int main(void) {
    
    int a, b, c, d;
    int *pa = &a, *pb = &b, *pc = &c, *pd = &d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int soma = *pa + *pb + *pc + *pd;

    printf("%d", soma);

}