// Given postfix expressions consisting of digits (0-9) and operators
// + - * / ^, evaluate each expression and print the result.

#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;

int ApplyOP(char op, int a, int b){
    if(op == '+') return a+b;
    if(op == '-') return a-b;
    if(op == '*') return a*b;
    if(op == '/') return a/b;
    return pow(a, b);
    
};

int main(){
    int n;
    cout<<"Enter number of string: "<<endl;
    cin>>n;
  

    cout<<"Enter PostFix expressions digit and operators: "<<endl;
    while(n--){
        string exp;
        cin>>exp;
        stack<int> st;

        cout << "\n--- Processing Expression ---\n";

        for(char ch: exp){
            if(isdigit(ch)){
                st.push(ch-'0');
            }else{
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                st.push(ApplyOP(ch,a,b));
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}