// Write a program to find the sum of all the elements of an array.
// Input
// Assume the size of array as 10. 
// Each test case will have 10 elements in ten different lines.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arrlen;
    cout<<"Enter array length: "<<endl;
    cin>>arrlen;

    vector<int> arr(arrlen);
    int sum = 0;

    cout<<"Enter "<<arrlen<<" numbers \n";

    for(int i=0; i<arrlen; i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }

    cout<<"Sum of all Array: "<<sum;

}