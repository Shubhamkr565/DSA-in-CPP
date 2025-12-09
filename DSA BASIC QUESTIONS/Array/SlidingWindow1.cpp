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

    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for(int i=k; i<n; i++){
        windowSum = windowSum+arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }

    cout<<"MaxSum of the subArray if size k "<<k<<" is "<<maxSum<<endl;
}