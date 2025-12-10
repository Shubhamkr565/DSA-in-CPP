// Longest subarray with sum ≤ k.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,1,3,2,4};
    int n = arr.size();
    int k = 6;

    int left = 0;
    int maxleng = 0;
    int sum = 0;

    for(int right = 0; right<n; right++){
        sum = sum+arr[right];

        while (sum>k)
        {
            sum = sum-arr[left];
            left++;
        }
        maxleng = max(maxleng, right-left+1);
    }

    cout<<"Longest subarray lengt "<<maxleng<<endl;
}