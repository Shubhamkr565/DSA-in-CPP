#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,43,65,23,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n;i++){
        int min_index = i;
        for(int j=i+1;j<=n-1; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

    }
    cout<<"After Using SelectionSort: "<<endl;
    for(int a=0; a<n; a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}