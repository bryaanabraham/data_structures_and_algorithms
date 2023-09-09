//sum and product of digits of a number n (leetcode 1281)
#include<iostream>
using namespace std;

int main(){
    int n, sum=0, prod=1, digit;
    cout<<"Enter number: ";
    cin>>n;
    while(n!=0){
        digit=n%10;
        sum+=digit;
        prod*=digit;
        n/=10;
    }
    cout<<"Product of digits of is "<<prod<<endl;
    cout<<"Summation of digits of is "<<sum<<endl;
}