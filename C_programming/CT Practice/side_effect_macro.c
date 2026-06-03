#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main() {
    int x = 5, y = 10;
    int res = MAX(x++, y++);
    printf("res=%d, x=%d, y=%d", res, x, y);
    return 0;
}