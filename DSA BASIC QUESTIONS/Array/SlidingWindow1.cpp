// Maximum sum of subarray of size k.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,1,5,1,3,2};
    int n = arr.size();

    int k = 3;

    int windowSum = 0;
    int maxSum = 0;

      // Step 1: calculate sum of the first window (first k elements)
    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
    maxSum = windowSum; // first window sum is the initial maximum

     // Step 2: slide the window from index k to end of array
    for(int i=k; i<n; i++){
        // Add new element (arr[i])
        // Remove element that is leaving the window (arr[i-k])
        windowSum = windowSum+arr[i] - arr[i-k];

         // Update maximum sum if current window sum is larger
        maxSum = max(maxSum, windowSum);
    }

    cout<<"MaxSum of the subArray if size k "<<k<<" is "<<maxSum<<endl;
}