#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 32, 5, 78, 60};
    int n = sizeof(arr)/sizeof(arr[0]);  // number of elements

    int* ptr = arr;       // pointer pointing to first element
    int max = *ptr;       // assume first element is max

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);  // update max using pointer
        }
    }

    cout << "Maximum element in array: " << max << endl;

    return 0;
}
