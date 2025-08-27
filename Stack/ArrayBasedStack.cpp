#include<iostream>
using namespace std;

#define MAX 5

class Stack{
    int arr[MAX];
    int top;

    public:
        Stack(){
            top = -1;
        }
        void push(int data){
            if(top == MAX-1){
                cout<<"Stack OverFlow...."<<endl;
                return;
            }
            arr[++top] = data;
            cout<<data<<" Push into stack."<<endl;
        }
        void pop(){
            if(top == -1){
                cout<<"Stack is Empty: NO POP."<<endl;
                return;
            }
            cout<<arr[top--]<<" Poped from stack."<<endl;
        }
        void peek(){
            if(top == -1){
                cout<<"Stack is Empty: NO PEEK."<<endl;
                return;
            }
            cout<<"Top element "<<arr[top]<<endl; 
        }

        bool isEmpty(){
            return (top == -1);
        }
        void display(){
            if(top == -1){
                cout<<"Stack is Empty:"<<endl;
                return;
            }
            cout<<"Stack Element (top to down)."<<endl;
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};


int main(){
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    // s1.push(60);
    // s1.push(70);

    s1.pop();
    s1.peek();

    s1.display();
    
}