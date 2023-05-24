#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
    int n;
    int count=0;
    std::cin>>n;
    std::vector<std::string> arr;
    for(int i=0;i<n;i++){
        std::string s;
        std::cin>>s;
        auto it = std::find(arr.begin(),arr.end(), s);
        if(s=="ENTER")
            arr.clear();
        else{
            if(it==arr.end()){
                arr.push_back(s);
                count++;
            }
        }
    }
    std::cout<<count;
}