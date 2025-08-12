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
    for(int j=0; j<n2; j++){
        rightarr[j] = arr[midIndex + 1 + j];
    }

    // print left subarr
    cout<<"Left Array: "<<endl;
    for(int i=0; i<n1; i++){
        cout<<leftarr[i]<<" ";
    }
    
    cout<<endl<<"Right Array: "<<endl;
    for(int j=0; j<n2; j++){
        cout<<rightarr[j]<<" ";
    }
    cout<<endl;

    // merge the temp subarra back int arr[start ... end]
    int i=0 ,j=0, k=startIndex;
    while(i<n1 && j<n2){
        if(leftarr[i] <= rightarr[j])
        {
            arr[k++] = leftarr[i++];
        }
        else{
            arr[k++] = rightarr[j++];
        }
    }
    
    while(i<n1){
        arr[k++] = leftarr[i++];
    }
    while(j<n2){
        arr[k++] = rightarr[j++];
    }
}

void mergeSort(int arr[] ,int startIndex, int endIndex){
    if (startIndex < endIndex){
        int midIndex = (startIndex + endIndex)/2;

        mergeSort(arr, startIndex, midIndex); //Left half
        mergeSort(arr, midIndex + 1, endIndex); // Right half
        merge(arr, startIndex, midIndex, endIndex);// Merge sorted half
    }
}




int main(){
    int arr[] = {10,4,32,56,34,2};
    int n = sizeof(arr)/sizeof(arr[0]);


    mergeSort(arr, 0, n-1);
    cout<<"Sorting Array: "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
        
    }
    return 0;
}

