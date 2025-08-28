#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);   // default all = -1
    stack<int> st;   // stack to keep elements

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop all smaller elements
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        // If stack not empty → top is next greater
        if (!st.empty()) {
            result[i] = st.top();
        }
        // Push current element into stack
        st.push(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans = nextGreaterElement(arr);

    cout << "Next Greater Elements: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
