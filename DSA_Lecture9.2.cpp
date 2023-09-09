//linear Search
#include<iostream>
using namespace std;

void getArr(int arr[],int size){
    cout<<"Enter Array: ";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }
}

int LinearSearch(int arr[],int elt,int size){
    for(int i=0; i<size;i++){
        if(arr[i]==elt){
            arr[size]=i+1;
            return 1;
        }
    }return 0;
}

int main(){
    int size, arr[100], elt;
    cout<<"Enter size: ";
    cin>>size;
    getArr(arr,size);
    cout<<"Enter Element to find: ";
    cin>>elt;
    if(LinearSearch(arr,elt,size)) cout<<"Element found at position "<<arr[size];
    else cout<<"Element not found.";
    return 0;
}