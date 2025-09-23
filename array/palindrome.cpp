// If an array contains n elements then write a program to check whether a[0] = a[n-1], a[1] = a[n-2] and so on.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arrlen;
    cout<<"Enter number of array len: ";
    cin>>arrlen;

    vector<int>arr(arrlen);
    cout<<"Enter array element: \n";
    for(int i=0; i<arrlen; i++){
        cin>>arr[i];
    }
    for(int i=0; i<arrlen; i++){
        int a = 1;
        if(arr[i] != arr[arrlen-a]){
            cout<<"Not Equal: \n";
            a++;
        }else{
            cout<<"yes Palindrome.\n";
            a++;
        }
    }

}
