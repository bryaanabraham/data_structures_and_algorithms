#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } 
        else {
            end = mid;
        }
    }
    return start;
}
int binarySearch (int arr[], int key, int start, int end){

    while(start<=end){

        int mid = (start+end)/2;
    
        if(arr[mid]==key)
            return mid;
        
        if(arr[mid]<key)
            start = mid+1;
        
        else
            end = mid-1;
    }
    
    return -1;
}
int search(int arr[], int n, int k)
{
    int pivot = getPivot(arr,n);

    if(k>=arr[pivot]&&k<=arr[n])
        return binarySearch(arr, k, pivot, n);

    else
        return binarySearch(arr, k, 0, pivot-1);
    return -1;
}


int main() {
    
    int arr[] = {11, 3, 4, 5, 6, 7, 8, 9};
    
    cout<<"Found at index: "<<search(arr, sizeof(arr)/sizeof(arr[0]), 3);

    return 0;
}
