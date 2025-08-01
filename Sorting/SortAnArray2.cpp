// Sort an Array in Descending Order

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        int max_index = i;

        for(int j=i+1; j<=n-1; j++){
            if(max_index < arr[j]){
                max_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }

    cout<<"After sorting an array in descending order"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
}