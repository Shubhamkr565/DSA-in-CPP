//  **Remove Duplicates from a Sorted Array**

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 3, 6, 3, 4, 10, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n-1; i++){
        int min_index = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        // swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl<<"Remove Duplicates...."<<endl;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            i++;
        }
        cout<<arr[i]<<" ";
    }

    return 0;
}
