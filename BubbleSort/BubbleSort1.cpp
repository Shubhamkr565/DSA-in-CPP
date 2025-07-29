#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,3,9,7};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-i-2; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"After BubbleSort: "<<endl;
    for(int z=0; z<n; z++){
        cout<<arr[z]<<" ";
    }

}