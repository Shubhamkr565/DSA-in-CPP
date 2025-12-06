// Find the smallest element.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,64,67,2,3,54,36};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"Min element: "<<min<<endl;
}