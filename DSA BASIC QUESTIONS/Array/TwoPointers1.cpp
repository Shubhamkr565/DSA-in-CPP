// Find if a pair exists with sum = target (sorted array).

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int target = 10;
    int n = arr.size();

    int left = 0;
    int right = n-1;

    while (left<right)
    {
        int sum = arr[left]+arr[right];
        if(sum == target){
            cout<<arr[left]<<", "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(sum < target){
            left++;
        }else{
            right--;
        }
    }

}