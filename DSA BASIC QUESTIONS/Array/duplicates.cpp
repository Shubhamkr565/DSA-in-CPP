// Remove duplicates from sorted array.

// using 2nd array
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr= {1,2,3,3,4,5,5};

//     int n = arr.size();

//     vector<int> arr2;

//     for(int i=0; i<n; i++){
//         if(i==0 || arr[i] != arr[i-1]){
//             arr2.push_back(arr[i]);
//         }
//     }
//     for(int i=0; i<arr2.size(); i++){
//         cout<<arr2[i]<<", ";
//     }
// }

// using two pointer method

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,3,4,5,5};
    int n = arr.size();

    int j = 0;

    for(int i=0; i<n; i++){
        if(arr[j] != arr[i]){
            j++;
            arr[j] = arr[i];
        }
    }
    cout<<"Array after "
    for(int i=0; i<=j; i++){
        cout<<arr[i]<<" ";
    }
}