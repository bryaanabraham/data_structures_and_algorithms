//swap allternate elements of an array
#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int size){
    for(int i=0; i<size;i+=2)
        if(i+1<size) 
            swap(arr[i], arr[i+1]);
    for(int i=0; i<size;i++)
        cout<<arr[i]<< ' '; cout<<endl;
}

int main(){
    int even[] = {1,2,3,4,5,6};
    int odd[]={7,8,9,10,11};
    SwapAlternate(even, 6);
    SwapAlternate(odd, 5);
    return 0;
}