// Check if parentheses/brackets are balanced.


#include<iostream>
#include<stack> // using stack from STL
using namespace std;


bool isBalanced(string exp){
   stack<char> st; // stack to store opening brackets


   for(int i=0; i<exp.size(); i++){
        // If it's an opening bracket → push into stack
       if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){//opening
           st.push(exp[i]);
       }else{
           // If stack is empty → no matching opening bracket
           if(st.empty()){
               return false;
           }
             // Check if top of stack matches the current closing bracket
           if((st.top() == '(' && exp[i] == ')' ||
               st.top() == '{' && exp[i] == '}' ||
               st.top() == '[' && exp[i] == ']')){
                   st.pop();
               }else{
                   return false; // mismatch case
               }
       }
   }
   return st.empty(); // If stack is empty → all brackets matched correctly
}


int main(){
   string exp = "{[()]}";
   cout<<(isBalanced(exp)? " Balance ": " Not Balance ");
   return 0;
}
