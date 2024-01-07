#include<iostream>
#include<map>
using namespace std;

int main(){
    //map gives sorted output
    //unordered map gives unsorted output
    
    //all procedures have a complexity of O(log(n))
    map <int,string> m;
    
    m[1]="Hello";
    m[2]="Hi";
    m[10]="Bryan";
    //or
    m.insert({5,"its"});
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"Finding 10: "<<m.count(10)<<endl;
    cout<<"Finding -10: "<<m.count(-10)<<endl;

    m.erase(10);
    cout<<"After Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    
    auto it = m.find(2);
    for (auto i=it; i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}
