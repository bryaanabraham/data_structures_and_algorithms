#include <iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a = {0,1,2,3};
    int size = a.size();
    
    for(int i=0; i<size; i++){
        cout<<a[i]<<' '<<endl;
    }
    
    cout<<"Element at index 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Laste Element: "<<a.back()<<endl;
}