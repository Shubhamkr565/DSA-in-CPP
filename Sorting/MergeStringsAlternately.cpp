// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
// starting with word1. If a string is longer than the other, append the additional letters onto 
// the end of the merged string.

// Return the merged string.

 

// Example 1:

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r

#include<iostream>
using namespace std;

int main(){
    string world1 = "abc";
    string world2 = "pqr";
    
    int l1 = world1.length();
    int l2 = world2.length();
    
    string merge = "";
    
    for(int i=0; i<max(l1,l2); i++){
        if(i<l1){
            merge = merge+world1[i];
        }
        if(i<l2){
            merge = merge+world2[i];
        }
    }
    cout<<"Merged String "<<merge<<endl;
    return 0;
}

