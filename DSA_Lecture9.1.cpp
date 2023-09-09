//min/max in an array
#include<iostream>
using namespace std;

void getArr(int arr[], int size){
    for (int i=0;i<size;i++){
            cin>>arr[i];
    }
}
void MinMaxArray(int arr[], int size){
    int max=0;
    for (int i=-0; i<size; i++){
        if(max<arr[i]) max=arr[i];
    }
    int min=max;
    for (int i=-0; i<size; i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"Maximum value is: "<<max<<endl;
    cout<<"Minimum value is: "<<min<<endl;
}

int main(){
    int size, arr[100];
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter array: ";
    getArr(arr,size);
    MinMaxArray(arr,size);
    return 0;
}