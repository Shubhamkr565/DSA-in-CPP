// Merge two sorted arrays using two-pointer technique
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {4, 6, 8, 12, 15};
    vector<int> arr2 = {3, 4, 9, 18, 20};

    vector<int> merged;
    
    int i = 0, j = 0;

    // Merge until one array runs out
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements from arr2
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    // Output
    cout << "Merged two sorted arrays:" << endl;
    for (int k = 0; k < merged.size(); k++) {
        cout << merged[k] << " ";
    }
    cout << endl;

    return 0;
}
