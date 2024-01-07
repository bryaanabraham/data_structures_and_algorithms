#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list <int> n(5,100);
    
    cout<<"n: "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    
    n.push_front(10);
    n.push_back(1000);
    
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Before erase: "<<endl<<"Size: "<<n.size()<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    n.erase(n.begin());
    cout<<"After erase: "<<endl<<"Size: "<<n.size()<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
}