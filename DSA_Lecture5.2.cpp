//fibonacci series for numbers upto n
#include<iostream>
using namespace std;

int main(){
    int n, a=0, b=1, next;
    cout<<"Enter value of n: ";
    cin>>n;
    for(next=0;next<=n;next=a+b){
        a=b;
        b=next;
        cout<<next<<" ";
    }
}