//Decimal to Binary
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, ans=0, i=0;
    cout<<"Enter Number:";
    cin>>n;
    while(n!=0){
        ans+=(n&1)*pow(10,i);
        i++;
        n>>=1;
    }
    cout<<ans;
    return 0;
}