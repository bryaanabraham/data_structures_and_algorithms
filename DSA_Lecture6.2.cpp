//Binary to Decimal
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0,ans=0;
    cout<<"Enter Binary: ";
    cin>>n;
    while(n!=0){
        if(n%10==1) ans+=pow(2,i)*(n%10);
        n/=10;
        i++;
    }
    cout<<ans;
    return 0;
}