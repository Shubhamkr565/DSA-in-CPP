// Range sum query: l to r.

// Find the sum of all elements from index l to index r (inclusive).

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr = {2,5,3,7,8,1};
//     int n = arr.size();
//     int start = 1;
//     int end = 4;
//     int sum = 0;
//     for(int i=start; i<=end; i++){
//         sum += arr[i];
//     }
//     cout<<"Sum of all elements from start to end "<<sum<<endl;

// }

// using prefix Sum method

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,5,3,7,8,1};
    int n = arr.size();

    vector<int> prefix(n);
    prefix[0] = arr[0];

    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]+arr[i];
    }

    int l = 1;
    int r = 3;
    int result;
    if(l==0){
        result = prefix[r];
    }else{
        result = prefix[r] - prefix[l-1];
    }
    cout<<"Sum for "<<l<<" to "<<r<<" is "<<result<<endl;
}