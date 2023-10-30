#include <stdio.h>

int main() {
    int array1[4][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};

    int array2[4][4] = {{17, 18, 19, 20},
                       {21, 22, 23, 24},
                       {25, 26, 27, 28},
                       {29, 30, 31, 32}};

    int resultado[4][4];
    int *p1 = (int *)array1; 
    int *p2 = (int *)array2;  
    int *pr = (int *)resultado;  

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            *((pr + i*4) + j) = *((p1 + i*4) + j) + *((p2 + i*4) + j);
        }
    }


    return 0;
}
