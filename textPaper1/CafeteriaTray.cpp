// The Cafeteria Tray Dispenser (Stack Operations)
// Problem Title
// Implement Stack Using Commands
// Problem Statement
// You are given a series of commands:
// 1 X → Push X
// 2 → Pop and print top element
// If stack is empty during pop, print -1.
// Approach / Logic
// Use stack data structure.
// Perform push and pop based on instruction.


#include<iostream>
#include<stack>
using namespace std;

int main(){
    cout<<"Enter test cases: "<<endl;
    int t;
    cin>>t;

    
    while(t--){
        cout<<"Enter number of Queries: \n";
        int Q;
        cin>>Q;

        stack<int> st;
        cout<<"Enter Queries: \n";
        while(Q--){
            cout<<"Command type (1 or 2):  ";
            int type;
            cin>>type;

            if(type == 1){
                cout<<"Enter Value to be pushed: ";
                int x;
                cin>>x;
                st.push(x);
                cout<<" Pushed "<<x<<endl;
            }else{
                if(st.empty()){
                    cout<<"-1"<<endl;
                }else{
                    cout<<st.top()<<endl;
                    st.pop();
                }
            }
        }
        cout<<endl;
    }
    return 0;
}