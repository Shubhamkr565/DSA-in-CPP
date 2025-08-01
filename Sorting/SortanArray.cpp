// - **Sort an Array of Integers**  
// Decide on a simple algorithm (e.g., Bubble, Selection, or Insertion Sort). 
// Repeatedly compare and reposition elements until the array is ordered.


// Uisg Bubble Sort;
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10,3,6,2,4,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<=n-2; i++){
//         for(int j=0; j<=n-i-2; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     cout<<"Using Bubbble Sort the array arrange "<<endl;
//     cout<<"Time Complexity=O(n^2)"<<endl;
//     cout<<"Space Complexity=O(1)"<<endl;

//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
// }



// using Selection sort

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 3, 6, 2, 4, 8, 9};
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

    return 0;
}
