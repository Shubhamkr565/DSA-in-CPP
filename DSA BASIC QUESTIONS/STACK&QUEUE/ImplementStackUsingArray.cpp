#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top;

    public:
        Stack(){
            top = -1;
        }
        void push(int data){
            if(top == 4){
                cout<<"Stack is OverFlow..."<<endl;
                return;
            }
            top++;
            arr[top] = data;
            cout<<data<<" Pushed into stack..."<<endl;
        }

        void pop(){
            if(top == -1){
                cout<<"Stack is Empty: "<<endl;
                return;
            }
            cout<<arr[top]<<" poped from stack...."<<endl;
            top--;
        }
        void peek(){
            if(top == -1){
                cout<<"Stack is Empty: "<<endl;
                return;
            }
            cout<<arr[top]<<" is the peek element into the stack..."<<endl;
        }
        void display(){
            if(top == -1){
                cout<<"Stack is Empty: "<<endl;
                return;
            }
            cout<<"Stack element top to bottom: ";
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<"NULL"<<endl;
        }
};

int main(){

    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.display();

    s1.peek();
    s1.pop();
    s1.peek();

    s1.display();

    return 0;
}