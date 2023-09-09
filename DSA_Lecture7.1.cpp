//reverse an integer
#include<iostream>
using namespace std;

int main(){
    int n, ans=0, digit;
    cout<<"Enter Number: ";
    cin>>n;
    while(n!=0){
        digit=n%10;
        ans=(10*ans)+digit;
        n/=10;
    }cout<<ans;
    return 0;
}