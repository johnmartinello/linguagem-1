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

    printf("%d %d", xy1.x, xy1.y);
}