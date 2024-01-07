#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque <int> d;
    d.push_back(0);
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    
    cout<<"d: "<<endl;
    for(int i:d){
        cout<<i<<endl;
    }cout<<endl;
    
    d.pop_front();
    cout<<"After Popping: "<<endl;
    for(int i:d){
        cout<<i<<endl;
    }cout<<endl;
    
    cout<<"Value at first index: "<<d.at(1)<<endl;
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Empty or not?: "<<d.empty()<<endl;
    cout<<endl;
    
    cout<<"Before erase: "<<endl<<"Size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase: "<<endl<<"Size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
}