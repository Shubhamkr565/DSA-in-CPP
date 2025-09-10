#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){

    vector<int> arr = {6,8,0,1,3};
    // Next Greater Element
    stack<int>S;
    vector<int> ans(arr.size(), 0);

    for(int i=arr.size()-1; i>=0; i-- ){
        while(S.size() > 0 && S.top() <= arr[i]){
            S.pop();
        }
        if(S.empty()){
            ans[i] = -1;
        }else{
            ans[i] = S.top();
        }
        S.push(arr[i]);
    }
    // print
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;
}