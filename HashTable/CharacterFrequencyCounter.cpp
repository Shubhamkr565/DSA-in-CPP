// Problem 4: Character Frequency Counter

// Task:
// User ek string input kare.
// Har character ka count print karo using unordered_map.

// Example Input:

// hello


// Output:

// h -> 1
// e -> 1
// l -> 2
// o -> 1


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> freq;

    // Count frequency of each character
    for(char c : s){
        freq[c]++;
    }

    // Print all character counts
    cout << "\nCharacter Frequency:\n";
    for(auto &p : freq){
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
