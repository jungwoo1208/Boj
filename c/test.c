#include <stdio.h>
int calc(char arr[]){
    int idx = 0;
    int score=0;
    while (arr[idx] != '\0') {
        score+=(int)arr[idx]-96;
        idx++;
    }
    return score;
}

int Process(char arr1[], char arr2[] ){
    int calc1=calc(arr1);
    int calc2=calc(arr2);
    if(calc1>=calc2){
        return 1;
    } else{
        return 0;
    }
}
int main() {
    char s1[21],s2[21];
    scanf("%s", s1);
    scanf("%s", s2);
    if(Process(s1,s2)){
        printf("%s",s1);
    } else{
        printf("%s",s2);
    }
    return 0;
}
