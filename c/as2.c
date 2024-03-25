#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d ", 2*x*y-12);
    printf("%d", 3*x*x-12*y*y*y+21*x+2*y);
    return 0;
}