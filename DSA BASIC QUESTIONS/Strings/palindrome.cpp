// Check if a string is palindrome.
// Reads the same forward and backward
// Characters are mirrored from start and end


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str = "abcba";
//     int n = str.size();

//     string reverse = "";

//     for(int i=n-1; i>=0; i--){
//         reverse += str[i];
//     }

//     if(str == reverse){
//         cout<<"Yes Palindrome."<<endl;
//     }else{
//         cout<<"No Palindrome."<<endl;
//     }
        // return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "abcba";
    int left = 0;
    int right = str.size()-1;

    bool isPalindrome = true;
    while (left<right)
    {
        if(str[left] != str[right]){
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        cout<<"Yes Palindrome"<<endl;
    }else{
        cout<<"No Palindrome"<<endl;
    }
    return 0;
}