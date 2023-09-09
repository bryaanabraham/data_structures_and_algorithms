//AP/GP upto 'n' terms of numbers starting with 'a' and difference/ratio 'r'
#include<iostream>
#include<math.h>
using namespace std;
void APGP(int n, int r, int a, int AP[], int GP[]){
    for (int i=1; i<=n; i++){
        AP[i-1]=a+(i-1)*r;
        GP[i-1]=a*pow(r,i-1);
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int a, r, n;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter Difference/Ratio: ";
    cin>>r;
    cout<<"Enter number of terms: ";
    cin>>n;
    int AP[n-1], GP[n-1];
    APGP(n,r,a,AP,GP);
    print(AP, n);
    print(GP, n);
    return 0;
}