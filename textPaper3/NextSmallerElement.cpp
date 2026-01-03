#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int arr[] = {40,80,50,20,90};
    int n = 5;

    stack<int> st;
    int ans[5];

     // Traverse array from RIGHT to LEFT
    for(int i=n-1; i>=0; i--){
        // Remove all elements from stack
        // which are GREATER than or EQUAL to current element
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }


    cout<<"Next Smaller Element to the right: "<<endl;
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}