// Check if an Array is Sorted

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bool isSorted = true;
    for (int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"The array is sorted in ascending order."<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
}