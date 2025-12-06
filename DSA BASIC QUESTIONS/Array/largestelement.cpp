// Find the largest element in an array.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {23,54,56,8,93,29,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=0; i<n; i++){
        
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Max Element: "<<max<<endl;
}