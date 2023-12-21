// Book alloation Problem:
//Painter's Partition Problem is the same as well
// Given an array of length 'n' containing page numbers of different books
// Assign at least one book to each of 'm' individuals such that the maximum sum of pages of an individuals is minimum

// Approach:
// Consider 'mid' to range from 0 to sum(arr[i])
// Start from the LHS... 
// - Keep adding elements of arr till the sum exceeds the total sum
// - Once exceeded, move on to the next individual by incrementing count and continue the same process
// - if individuals exceed count then the 'mid' value is not accepted and we move to right side of mid as we clearly need a higher value
// - if all criteria are met we store the value of mid in ans and move to the left side to see if a lower value of mid exists


bool isPossible(vector<int>& arr, int n, int m, int mid){

    //we start with first student
    int studentCount = 1;
    int pageSum = 0;
    if (m>n) return false;
    for (int i=0; i<n; i++){
        
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
            
        else{
            //we move on to the next studen once the page count has exceeded max(mid)
            studentCount++;
            if(studentCount>m||arr[i]>mid)
                return false;
            //we assign pageSum = arr[i] to reset the sum from the sum aquired from the previous student
            pageSum = arr[i];            
        }
        if(studentCount > m)
            return false;
    }
    
    return true;
}

int findPages(vector<int>& arr, int n, int m) {

    int start = 0;
    int sum = 0;
    int ans = -1;
    //sum = sum of all elements of array
    for (int i =0; i<n; i++)
        sum+=arr[i];
    
    int end = sum;
    int mid = mid = start + (end-start)/2;

    while(start<=end)
    {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;
            //we move to the right part to see if there is a smaller solution
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
