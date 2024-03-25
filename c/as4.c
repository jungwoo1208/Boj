#include <stdio.h>
int main(){
    int n,result;
    scanf("%d",&n);
    result=1;
    while(n>0){
        result*=n;
        n--;
    }
    printf("%d",result);
    return 0;
}