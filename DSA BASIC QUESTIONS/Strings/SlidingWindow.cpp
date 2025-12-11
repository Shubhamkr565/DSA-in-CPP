// Longest substring without repeating characters.
// find the length of the longest substring that has all unique characters
// (meaning → no character should repeat).

#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < s.size()) {

        // If character not repeating, expand window
        if (window.find(s[right]) == window.end()) {
            window.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        else {
            // If repeating, shrink window from left
            window.erase(s[left]);
            left++;
        }
    }

    return maxLen;
}

int main() {
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s);
    return 0;
}
