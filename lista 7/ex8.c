#include <stdio.h>
#define pi 3.14

int main(void) {
    
    int a, *pa = &a;;
    float media, *pm = &media;
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &a);

        *pm += *pa;
    }

    printf("%.2f", media/10);
}