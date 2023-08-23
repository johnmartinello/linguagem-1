#include <stdio.h>
#include <math.h>

int main() {

    int n1,n2,n3;

    scanf("%d %d %d", &n1,&n2,&n3);

    int maior = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    int menor = n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
    
    printf("maior: %d\n", maior);
    printf("menor %d\n", menor);
    
    
    float media = (n1 + n2 + n3) / 3.0;

    if (n1 != maior && n1 != menor) {
        if (n1 > media) {
            printf("%d e maior que a media.\n", n1);
        } else if (n1 < media) {
            printf("%d e menor que a media.\n", n1);
        } else {
            printf("%d e igual a media.\n", n1);
        }
    }
    
    if (n2 != maior && n2 != menor) {
        if (n2 > media) {
            printf("%d maior que a media.\n", n2);
        } else if (n2 < media) {
            printf("%d menor que a media.\n", n2);
        } else {
            printf("%d igual a media.\n", n2);
        }
    }
    
    if (n3 != maior && n3 != menor) {
        if (n3 > media) {
            printf("%d e maior que a media.\n", n3);
        } else if (n3 < media) {
            printf("%d e menor que a media.\n", n3);
        } else {
            printf("%d e igual a media.\n", n3);
        }
    }

    return 0;

}
