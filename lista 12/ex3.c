#include <stdio.h>

struct XY {
    int x;
    int y;
};

struct XY criarxy (int x, int y) {
    struct XY xy;

    xy.x = x;
    xy.y = y;

    return xy;

}


void main(){
    int x,y;

    scanf("%d %d", &x, &y);

    struct XY xy1;
    xy1 = criarxy(x, y);

    struct XY xy2;
    xy2.x = xy1.x;
    xy2.y = xy1.y;

    printf("%d %d", xy2.x, xy2.y);
}