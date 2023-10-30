#include <stdio.h>
#include <stdlib.h>

int main (void){
        
        int A[100] = {0};
        int *p = A, *q = A+25, *r = A+50, *s = A+75;

        printf("%d %d %d %d", *p, *q, *r, *s);
        
    }