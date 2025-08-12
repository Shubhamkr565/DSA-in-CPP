// **Sort Array using Merge or Quick Sort**  
//   Apply a divide-and-conquer strategy: recursively break the array into smaller parts, sort and merge.

#include<iostream>
using namespace std;


void merge(int arr[] , int startIndex , int midIndex, int endIndex){
    int n1 = midIndex-startIndex + 1; //Size of left subarray
    int n2 = endIndex-midIndex;     // Size of right subarray

    // Create temporary arrays
    int leftarr[n1], rightarr[n2];

    // Copy data into temp arrays
    for(int i=0; i<n1; i++){
        leftarr[i] = arr[startIndex+i];
    }
    cout<<"left Array: "<<endl;
    for(int i=0; i<n1; i++){
        cout<<leftarr[i]<<" ";
    }

}





int main(){
    int arr[] = {10,4,32,56,34,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    merge(arr, startIndex, midIndex, endIndex);

    mergeSort(arr, 0, n-1);
    cout<<"Sorting Array: "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
        
    }
    return 0;
}

