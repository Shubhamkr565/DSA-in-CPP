// Reverse a string.

#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str = "abcde";
    string str;
    cout<<"Enter a string: "<<endl;
    getline(cin, str);
    int n  = str.size();

    string reverse = "";
    for(int i=n-1; i>=0; i--){
        reverse += str[i];
    }
    cout<<"Original string : "<<str<<endl;
    cout<<"Reverse string : "<<reverse<<endl;
}