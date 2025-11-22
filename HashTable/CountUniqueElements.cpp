// Problem 2: Count Unique Elements

// Input: {10, 20, 10, 40, 50, 20}
// Output: Unique count = 4

// 👉 Use set.insert() and print size.


#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {10,20,10,40,10,20};

    int n = sizeof(arr)/sizeof(arr[0]);

    // unordered_set<int> Unique;

    // for(int i=0; i<n; i++){
    //     Unique.insert(arr[i]);
    // }

    int count = 0;
    for(int i=0; i<n; i++){
        int data = arr[i];
        bool isDuplicate = false;

        for(int j=0; j<i; j++){
            if(data == arr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate == false){
        count++;
    }

    }
    
    cout << "Unique count = " << count << endl;
}