#include<iostream>
#include<vector>
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
            cout<<data<<" Push into the stack."<<endl;
        }
        void display(){
            if(top == -1){
                cout<<"Stack is Empty:"<<endl;
                return;
            }
            cout<<"Stack Element (top to button): "<<endl;
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

    s1.display();
    
}