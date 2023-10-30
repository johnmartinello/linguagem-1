#include <stdio.h>

int main(void) {
    
    float n1, n2;

    scanf("%f %f", &n1, &n2);

    float *p1 = &n1, *p2 = &n2;

    printf("n1 conteudo: %.2f. n2 conteudo: %.2f.\n", n1, n2);
    printf("n1 endereco: %p. n2 endereco: %p\n", &n1, &n2);
    printf("p1 conteudo: %p. p2 conteudo: %p.\n", p1, p2);
    printf("p1 endereco: %p. p2 endereco: %p\n", &p1, &p2);
    printf("p1 conteudo apontando: %.2f. p2 conteudo apontando: %.2f\n", *p1, *p2);
    
    return 0;
}
