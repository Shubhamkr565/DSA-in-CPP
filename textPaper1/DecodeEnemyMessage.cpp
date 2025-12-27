// Decode Enemy Message
// Problem Title
// Reverse Each Word in a Sentence
// Problem Statement
// Given encoded messages where each word is reversed, decode them by reversing individual words.


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s1 = "olleh dlrow";
    string word = "";
    for(int i=0; i<=s1.length(); i++){
        if( i == s1.length() || s1[i] == ' '){
            reverse(word.begin(), word.end());
            cout<<word<<" ";
            word = "";
        }else{
            word += s1[i];
        }
    }
    return 0;
}