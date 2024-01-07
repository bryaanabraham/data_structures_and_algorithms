#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack <string> s;
    s.push("hi");
    s.push("hello");
    s.push("Ca va");
    
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Empty or not?: "<<s.empty()<<endl;
}