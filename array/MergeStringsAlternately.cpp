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