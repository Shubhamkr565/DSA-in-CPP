// using Brute force
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1 = {4,6,8,12,15};
    vector<int> arr2 = {3,4,9,18,20};

    vector<int> merged;

    // vector.insert(position_iterator, range_start_iterator, range_end_iterator);
    merged.insert(merged.end(), arr1.begin(), arr1.end());
    merged.insert(merged.end(), arr2.begin(), arr2.end());

    // vector<int> merged;

    sort(merged.begin(), merged.end());

    cout<<"Merged Array: "<<endl;

    for(int i=0; i<merged.size(); i++){
        cout<<merged[i]<<" ";
    }
    return 0;

}