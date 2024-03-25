#include <stdio.h>
int main() {
    int c,t;
    int v=1;
    int result;
    scanf("%d %d", &c, &t);
    t=t/10;
    for(int i=0;i<t;i++){
        v*=2;
    }
    if(c>=v) {
        result = c / v;
        printf("%d", result);
    }
    else
        printf("Can not");
    return 0;
}