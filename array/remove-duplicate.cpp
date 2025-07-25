// Remove duplicates from sorted array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,2,3,3,4,4,5,5,6,7,8};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int i =0;

    for(int j=1; j<n; j++){
        if (arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }

    }
    cout<<"After removing duplicates from the sorted array ";
    for(int k = 0; k<=i; k++){
        cout<<arr[k]<<" ";
    }
}