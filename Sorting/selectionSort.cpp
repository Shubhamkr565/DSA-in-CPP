#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        int minIndex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        // Swap
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main(){
    vector<int> arr = {5,3,1,4};
    cout<<"Using SelectionSort to Sort the array:"<<endl;

    selectionSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}