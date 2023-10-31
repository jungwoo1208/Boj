#include <iostream>
using namespace std
int main(){
    long long money;
    long double year;
    long double month;
    cout << "등록금을 입력하세요: "<<endl;
    cin >> money;
    cout << "연이율을 입력하세요: "<<endl;
    cin >> year;
    cout<<year/12<<endl;
    return 0;
}