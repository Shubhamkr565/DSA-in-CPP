<<<<<<< HEAD
#include<iostream>
using namespace std;

class Solution{
  public:
  string mergeAlternately(string word1, string word2){
    int i=0, j=0;
    string merge = "";

    while(i<word1.length() && j<word2.length()){
      merge += word1[i++];
      merge += word2[j++];
    }

    while (i<word1.length())
    {
      merge += word1[i++];
    }
     
    while(j<word2.length()){
      merge +=word2[j++];
    }
    return merge;
  }
};



int main(){
  Solution s;
  string word1 = "abc";
  string word2 = "pqr";

  cout<<"Result: "<<s.mergeAlternately(word1, word2);
  return 0;
}
=======
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
    string word1 = "abc";
    string word2 = "pqr";

    int l1 = word1.length();
    int l2 = word2.length();
    int merge;
    
}
>>>>>>> ca71b85 (array)
