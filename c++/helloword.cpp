#include <iostream>
void change(int *a,int *b);
int main()
{
    int a=10;
    int b=20;

    int *pa=&a;
    int *pb=&b;

    change(pa,pb);

    std::cout<<a<<b;

}
void change(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}