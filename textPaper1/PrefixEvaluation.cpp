// Action-First Math Processor (Prefix Evaluation)
// Problem Title
// Evaluate Prefix Expression
// Problem Statement
// Evaluate expressions written in Prefix notation using digits and operators.
// Approach / Logic
// Scan expression from right to left.
// Push digits.
// On operator:
// Pop two operands.
// Apply operation.
// Push result.


#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int ApplyOperator(char op, int a, int b){
    if(op == '+') return a+b;
    if(op == '-') return a-b;
    if(op == '*') return a*b;
    if(op == '/') return a/b;
    return pow(a, b);
};

int main(){
    cout<<"Enter Prefix notation using digits and operators: "<<endl;
    int n;
    cin>>n;
    cout << "Enter prefix expressions ( operators  & digits only):\n";
    while(n--){
        string exp;
        cin>>exp;

        stack<int> st;

        for(int i=exp.length()-1; i>=0; i--){
            if(isdigit(exp[i])){
                st.push(exp[i]-'0');
            }else{
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                int result = ApplyOperator(exp[i], a,b);
                st.push(result);
            }
        }
        cout << "Result = " << st.top() << endl;
    }
    cout << "Program finished successfully." << endl;
    return 0;
}