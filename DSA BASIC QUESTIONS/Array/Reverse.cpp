// Reverse the array.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50};
    int n = arr.size();
    
    // vector<int> arr2;
    // for(int i=n-1; i>=0; i--){
    //     arr2.push_back(arr[i]);
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr2[i]<<", ";
    // }

    reverse(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}