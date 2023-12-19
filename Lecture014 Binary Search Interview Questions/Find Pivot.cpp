// The given array consists of a sorted array which has been circularly rotated along a pivot element
// This element would be first in the sorted array
// Find the index pivot in logarithmic time complexity

#include <iostream>
#include <vector>

int findPivot(const std::vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

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

int main() {
    std::vector<int> arr = {10, 11, 3, 4, 5, 6, 7, 8, 9};
    int pivotIndex = findPivot(arr);

    std::cout << "Pivot index: " << pivotIndex << std::endl;

    return 0;
}
