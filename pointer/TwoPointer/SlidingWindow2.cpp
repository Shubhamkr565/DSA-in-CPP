#include<iostream>
#include<climits> // for INT_MAX
using namespace std;

int main(){
    int arr[] = {5, 2, 8, 1, 9, 4};
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int min_sum = INT_MAX;
    int max_sum = INT_MIN;

    for(int i = 0; i <= arrlen - k; i++){
        int sum = 0;
        for(int j = i; j < i + k; j++){
            sum += arr[j];
        }
        if(min_sum > sum){
            min_sum = sum;
        }
        if(max_sum < sum){
            max_sum = sum;
        }
    }

    cout << "Min_sum of the subarray: " << min_sum << endl;
    cout << "Max_sum of the subarray: " << max_sum << endl;
}
