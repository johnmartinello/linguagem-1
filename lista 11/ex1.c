#include <stdio.h>

void valor(int valor) {
    printf("valor() = %p\n", &valor);
}

int main() {
    int x = 42;
    scanf("%d", &x);
    
    printf("main(): %p\n", &x);
    
    valor(x);
    
    return 0;
}
