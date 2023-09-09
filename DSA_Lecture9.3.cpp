//Reverse an array
#include<iostream>
using namespace std;
void getArr(int arr[],int size){
    cout<<"Enter array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void RevArr(int arr[],int first, int last){
    if(first<last) {
        swap(arr[first],arr[last]);
        RevArr(arr,first+1,last-1);
    }
}

int main(){
    int size, arr[100];
    cout<<"Enter size: ";
    cin>>size;
    getArr(arr,size);
    RevArr(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}