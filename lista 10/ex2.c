#include <stdio.h>

float Menor(float num1, float num2){
    if (num1 < num2){
        return num1;
    }
    else {
        return num2;
    }
}

int main(void) {
    
    float n1 = 51.5, n2 = 10.12;

    float x = Menor(n1,n2);

    printf("%f", x);
}