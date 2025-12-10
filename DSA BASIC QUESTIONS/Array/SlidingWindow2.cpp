// Count subarrays with sum < k.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,1};
    int n = arr.size();
    int k = 4;
    int count = 0;

    for(int i=0; i<n; i++){
        int sum = 0;

        for(int j=i; j<n; j++){
            sum = sum+arr[j];
            if(sum < k){
                count++;
            }
        }
    }
    cout<< "Total subarrays with sum < " << k << " = " << count << endl;
}