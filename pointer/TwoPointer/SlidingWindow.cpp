// Maximum Sum of Subarray of Size K (Fixed-size Sliding Window)
#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,14,1,6,9,12,15,19,3,12,8};
    int k = 4;
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    int max_sum = 0;

    for(int i=0; i<arrlen-k; i++){
        int sum = 0;
        for(int j=i;j<i+k; j++){
            sum = sum+arr[j];
        }
        if(max_sum<sum){
            max_sum = sum;
        }
    }
    cout<<"Max sum of sub array: "<<max_sum<<endl;
}