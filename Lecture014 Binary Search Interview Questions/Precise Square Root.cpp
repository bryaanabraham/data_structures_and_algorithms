#include<iostream>
using namespace std;

long long int mySqrt(int n) {
        
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    
    long long int ans = -1;
    while(s<=e) {
        
        long long int square = mid*mid;
        
        if(square == n)
            return mid;
        
        if(square < n ){
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double preciseSqrt(int n, int precision){
    
    double factor = 1;
    double ans = mySqrt(n);
    
    for(int i=0; i<=precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n,p;
    cout<<"Enter Number followed by precision: ";
    cin>>n>>p;
    cout<<preciseSqrt(n, p)<<endl;
}