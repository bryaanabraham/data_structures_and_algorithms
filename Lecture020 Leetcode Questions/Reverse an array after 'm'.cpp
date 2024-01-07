#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m, int n){
    int s=m+1;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }    	
}
void print(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector <int> arr;
    int t,m,n;
    cin>>t;
    while(t--){
        arr.resize(n);
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reverseArray(arr, m, n);
        print(arr,n);
    }
    return 0;
}