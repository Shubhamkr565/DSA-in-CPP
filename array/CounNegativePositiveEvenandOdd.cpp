// Write a program to find out in a array how many elements are positive, how many are negative, how many are even and how many odd.
// Input Format


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arrlen;
    cout << "How many array length: ";
    cin >> arrlen;

    vector<int> arr(arrlen);
    cout << "Enter numbers (Negative, Positive, Even, Odd): \n";

    int negative = 0, positive = 0, even = 0, odd = 0;

    for(int i = 0; i < arrlen; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < arrlen; i++) {
        // Check sign
        if(arr[i] < 0) {
            negative++;
        } else if(arr[i] > 0) {
            positive++;
        }

        // Check parity (zero is considered even)
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}
