// Check if two strings are anagrams.

// Two strings are anagrams if:
// They contain the same characters With the same frequency and Order does not matter


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "hello";
    string str2 = "lleoh";

    if(str1.size() != str2.size()){
        cout<<"Not Anagrams"<<endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2){
        cout<<"Yes Anagrams"<<endl;
    }else{
        cout<<"Not Anagrams"<<endl;
    }
    return 0;
}
