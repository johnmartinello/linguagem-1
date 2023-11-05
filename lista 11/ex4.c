#include <stdio.h>

void inverter(int* x, int* y) {
    int aux = *x;
    *x = *y;
    *y = aux;

}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("x e y: %d %d\n", x, y);
    
    inverter(&x, &y);
    
    printf("x e y: %d %d\n", x, y);
    return 0;
}
