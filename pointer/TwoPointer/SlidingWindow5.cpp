#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 6};
    int k = 10;
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    int total_subArr = arrlen * (arrlen + 1) / 2;
    cout << "Total Subarrays: " << total_subArr << endl;

    // Loop through all possible subarrays
    for (int i = 0; i < arrlen; i++) {
        int sum = 0;
        for (int j = i; j < arrlen; j++) {
            sum += arr[j];
            if (sum < k) {
                count++;
            }
        }
    }

    cout << "Total number of subarrays with sum less than " << k << " is: " << count << endl;
    return 0;
}
