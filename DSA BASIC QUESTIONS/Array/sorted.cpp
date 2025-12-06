// Check if array is sorted or not.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,7};
    int n = arr.size();

    bool isSorted = true;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted) cout<<"Array is Sorted....\n";
    else cout<<"Array is not Sorted.....\n";
}