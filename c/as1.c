#include <stdio.h>
int BMI(float f){
    if(f<20){
        return 1;
    } else if(f<24){
        return 2;
    } else{
        return 0;
    }
}
int main(){
    int judge;
    float bmi;
    scanf("%f",&bmi);
    judge = BMI(bmi);
    if(judge==1){
        printf("low");
    } else if(judge==2){
        printf("normal");
    } else{
        printf("warning");
    }
}