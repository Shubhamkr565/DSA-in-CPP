// Write a program to remove all duplicate number in the array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,2,3,3,3,4,4,4,5,5,6,};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int i=0;

    for(int j=0; j<n; j++){
        if (arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    cout<<"Array after removing duplicates ";
    for(int k = 0; k<=i; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}