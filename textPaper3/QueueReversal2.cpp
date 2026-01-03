#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
    private:
    Node* front;
    Node* rear;
    int size;

    public:
    Queue(){
        front = rear = NULL;
        size = 0;
    }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(rear == NULL){
            front = rear = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue is Empty: \n";
            return;
        }
        Node* temp = front;
        cout<<"Dequeue: "<<temp->data<<endl;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }
        delete temp;
        size--;
    }
    void peek(){
        if(front == NULL){
            cout<<"Queue is Empty: \n";
            return;
        }else{
            cout<<"Peek element : "<<front->data<<endl;
        }
    }
    int getSize(){
        cout<<"Size: "<<size<<endl;
        return size;
    }

    void reverseQueue(){
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return;
        }


        stack<int> st;
        Node* temp = front;
        while(temp!=NULL){
            st.push(temp->data);
            temp = temp->next; 
        }

        temp = front;
        while(!st.empty()){
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
    }
    void display(){
        if(front == NULL){
            cout<<"Queue is Empty: \n";
            return;
        }
        Node* temp = front;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }cout<<"NULL ";
        getSize();
        
    }

};

int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    
    q1.display();
    q1.reverseQueue();
    q1.display();

    return 0;

    
}