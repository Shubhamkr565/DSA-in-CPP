#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>& arr, int start, int end){
    int pivot = arr[start];
    int i= start+1;
    
    for(int j= start+1; j<=end; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[start], arr[i-1]);
    return i-1;
}



void quickSort(vector<int> &arr, int start, int end){
    if(start<end){
        int pivotIndex = partition(arr, start, end);
        quickSort(arr,start,pivotIndex-1);
        quickSort(arr, pivotIndex+1, end);
    }
}



int main(){
    vector<int>arr = {10, 16, 8, 12, 15, 6, 3, 9, 5};

    cout<<"Original Array: ";
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    quickSort(arr, 0, arr.size()-1);

    cout<<"Sorted Array: ";
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    return 0;
}