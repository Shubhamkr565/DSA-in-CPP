// Count Swaps in Bubble Sort

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,8,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    cout<<"Total number of Swaps Count is: "<<count<<'.'<<endl;
}