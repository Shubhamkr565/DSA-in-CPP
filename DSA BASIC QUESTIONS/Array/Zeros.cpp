// Move all zeros to the end

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0,23,12,0,43,0,45};
    int n = arr.size();
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while (j<n)
    {
        arr[j] = 0;
        j++;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

