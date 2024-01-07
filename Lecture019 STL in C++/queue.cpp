#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue <string> q;
    q.push("hi");
    q.push("hello");
    q.push("Ca va");
    cout<<"Size: "<<q.size()<<endl;
    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"Size after pop: "<<q.size()<<endl;
    cout<<"First element after pop: "<<q.front()<<endl;
    q.pop();
    cout<<"Size after pop: "<<q.size()<<endl;
    cout<<"First element after pop: "<<q.front()<<endl;
    q.pop();
    cout<<"Size after pop: "<<q.size()<<endl;
    cout<<"First element after pop: "<<q.front()<<endl;
    cout<<"Empty or not?: "<<q.empty()<<endl;
}