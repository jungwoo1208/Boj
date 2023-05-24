#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int a,b;
    cin>> a >> b;
    string arr1 [a];
    string arr2 [b];
    for(int i=0;i<a;i++){
        string k;
        cin>>k;
        arr1[i]=k;
    }
    for(int i=0;i<b;i++){
        string k;
        cin>>k;
        arr2[i]=k;
    }
    set<string> set1(arr1,arr1+a);
    set<string> set2(arr2,arr2+b);
    set<string> result;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(result, result.begin()));
    cout<<result.size()<<std::endl;
    for(string k: result){
        cout<<k<<std::endl;
    }
}
