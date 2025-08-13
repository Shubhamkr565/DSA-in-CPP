#include<iostream>
#include<vector>
using namespace std;



void insertionSort(vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    vector<int> arr = {5,2,4,6};

    cout<<"Before insertion Sort: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr);
    cout<<endl<<"After insertion Sort: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}