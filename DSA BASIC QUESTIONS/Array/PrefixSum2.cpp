// Count number of subarrays with sum = k (prefix + hashmap).
// how many subArray have sum exactly equal to k;

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4};
    int k = 6;
    int n = arr.size();
    int count = 0;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum+arr[i];
        }
        if(sum == k){
            count++;
        }
    }
    cout<<"Total SubArray have exactly Sum equal to k "<<k<<" = "<<count<<endl;
}