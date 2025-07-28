// Given input array, Find the maximum sum of all subarrays of size k

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,4,2,6,3,7,9,8};
    int k;
    cout<<"Enter subarray of size : ";
    cin>>k;
    cout<<"SubArray size: "<<k<<endl;
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    int max_sum = 0;

    for(int i=0; i<arrlen-k; i++){
        int sum =0;
        for(int j=i; j<i+k; j++){
            sum = sum+arr[j];
        }
        if(max_sum<sum){
            max_sum = sum;
        }
    }
    cout<<"Max_sum: "<<max_sum;

}