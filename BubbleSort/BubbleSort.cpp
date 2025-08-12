#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    vector<int> arr = {5,3,1,4};
    cout<<endl<<"Before Sorting: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    
    cout<<endl<<"After Sorting: "<<endl;
    bubbleSort(arr);
    
}