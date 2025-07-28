// Check if there exists any subarray with sum equal to a given value 'ans'

#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 6, 8, 1};
    int ans = 9;
    int arrlen = sizeof(arr) / sizeof(arr[0]);
    bool found = false;

    for (int i = 0; i < arrlen; i++) {
        int sum = 0;
        for (int j = i; j < arrlen; j++) {
            sum += arr[j];
            if (sum == ans) {
                found = true;
                break;
            }
        }
        if (found) break;  // exit outer loop too if found
    }

    if (found)
        cout << "True: Subarray with sum " << ans << " exists." << endl;
    else
        cout << "False: No subarray with sum " << ans << " found." << endl;

    return 0;
}
