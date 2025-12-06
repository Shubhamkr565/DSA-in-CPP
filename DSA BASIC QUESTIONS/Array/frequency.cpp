// Count frequency of each element.

#include<iostream>
// #include<map>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {3,5,1,4,7,3,1,};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;
    // map<int, int> freq;
    // count element

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(auto x: freq){
        cout<<x.first<<" appears "<<x.second<<" times "<<endl;
    }
    return 0;


}