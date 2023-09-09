//power of 2
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    bool flag;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0;i<31;i++)
        if(n==pow(2,i)) {
            flag =1;
            break;
        }
    if(flag) cout<<"It is a power of 2";
    else cout<<"Not a power of 2";
    return 0;
}