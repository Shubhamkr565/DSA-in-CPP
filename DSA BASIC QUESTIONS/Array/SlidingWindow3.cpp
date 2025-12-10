// Longest subarray with sum ≤ k.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,1,3};
    int n = arr.size();
    int k = 3;
    int maxlenght = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum+arr[j];
            if(sum <= k){
                maxlenght = max(maxlenght, j-i+1); 
            }
        }
    }
    cout<<"Longest subarray length = "<<maxlenght;

}