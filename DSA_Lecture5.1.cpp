#include<iostream>
using namespace std;

void operators(int a, int b){
    cout<<"a&b="<<(a&b)<<endl;
    cout<<"a^b="<<(a^b)<<endl;
    cout<<"a|b="<<(a|b)<<endl;
    cout<<"~a="<<~a<<endl;
}
void shift(){
    cout<<"a>>b="<<(5>>1)<<endl;
    cout<<"a<<b="<<(5<<1)<<endl;
}

int main(){
    operators(4,6);
    shift();
}