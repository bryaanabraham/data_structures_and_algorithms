#include<iostream>
using namespace std;

int binarySearch (int arr[], int size, int key){
    
    int start = 0;
    int end = size;
    
    int mid = (start+end)/2;
    
    while(start<=end){
        
        if(arr[mid]==key)
            return mid;
        
        if(arr[mid]<key)
            start = mid+1;
        
        else
            end = mid-1;
        
        mid = (start+end)/2;
    }
    
    return -1;
}

int main(){
    int even[] = {2, 4, 6, 8, 10, 12};
    int odd[] = {3, 5, 7, 9, 11};
    
    int key = 12;
    int evenIndex = binarySearch(even, sizeof(even)/sizeof(even[0]), key);
    cout<<"Index of "<<key<<" in even is "<<evenIndex<<endl;
    
    key = 7;
    int oddIndex = binarySearch(odd, sizeof(odd)/sizeof(odd[0]), key);
    cout<<"Index of "<<key<<" in odd is "<<oddIndex<<endl;
}