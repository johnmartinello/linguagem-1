#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, x3, x4, y1, y2, y3, y4, area;

    printf("primeiro xy: ");
    scanf("%f %f",&x1, &y1);

    printf("segundo xy: ");
    scanf("%f %f",&x2, &y2);

    printf("terceiro xy: ");
    scanf("%f %f",&x3, &y3);
    
    printf("quarto xy: ");
    scanf("%f %f",&x4, &y4);

    area = 0.5 * fabs((x1*y2 + x2*y3 + x3*y4 + x4*y1) - (x2*y1 + x3*y2 + x4*y3 + x1*y4));
    printf("A area do quadrilatero eh: %.2f", area);

    return 0;

}
