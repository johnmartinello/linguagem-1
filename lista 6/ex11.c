#include <stdio.h>

int main(void) {
    
    float p1, p2, media;

    printf("nota p1: ");
    scanf("%f", &p1);

    printf("nota p2: ");
    scanf("%f", &p2);

    media = (p1 + p2)/2;

    if(media >= 5 && (p1 > 3 || p2 > 3)){
        printf("Aprovado. Media %.2f", media);
    }
    else{
        float p3, maior;
        printf("nota p3: ");
        scanf("%f", &p3);

        media = (p3 + (p1 > p2 ? p1 : p2))/2;

        if (media >= 5){
            printf("Aprovado. Media %.2f", media);
        }
        else{
            printf("Reprovado. Media %.2f", media);
        }
    }
   
}