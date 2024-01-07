#include<iostream>
#include<set>
using namespace std;

int main(){
    
    set <int> s;
    
    s.insert(9);
    s.insert(8);
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(7);
    s.insert(5);
    
    
    for (auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    
    s.erase(s.begin());
    cout<<"After erase: "<<endl;
    
    for (auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    
    //count: does element exist
    cout<<"Does 7 exist?: "<<s.count(7)<<endl;
    cout<<"Does -7 exist?: "<<s.count(-7)<<endl;
    
    //find: gives the iterator of the element
    set <int> ::iterator itr = s.find(8);
    
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
}
