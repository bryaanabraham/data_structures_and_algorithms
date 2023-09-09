//one's compliment
#include<iostream>
using namespace std;

int main(){
    int m, n, mask=0;
    cout<<"Enter number: ";
    cin>>n;
    m=n;
    while(m!=0){
        mask=(mask<<1)|1;
        m>>=1;
    }
    if(n==0) cout<<"1";
    else cout<<((~n)& mask);
    return 0;
}