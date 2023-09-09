//function for even/odd deducer
#include<iostream>
using namespace std;

bool IsEven(int num){
    if(num&1) return 0;
    return 1;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(IsEven(n)) cout<<"Number is Even";
    else cout<<"Number is odd";
    return 0;
}