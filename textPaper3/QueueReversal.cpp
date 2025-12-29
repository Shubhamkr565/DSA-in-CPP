#include<iostream>
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
            cout<<"Queue is Empty: "<<endl;
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
            cout<<"Queue Empty: No peek element..."<<endl;
            return;
        }else{
            cout<<front->data<<" is a peek element in the queue: "<<endl;
        }
    }
    int getSize(){
        cout<<"Size: "<<size<<endl;
        return size;
    }
    void reverse() {
        Node* prev = NULL;
        Node* curr = front;
        Node* next = NULL;

        rear = front;   

        while (curr != NULL) {
            next = curr->next;   // store next
            curr->next = prev;   // reverse link
            prev = curr;         // move prev
            curr = next;         // move curr
        }

        front = prev;  // new front
    }

    void reverseUsingStack() {

        // If queue is empty or has only one element
        if (front == NULL || front->next == NULL) {
            return;
        }

        stack<int> st;      // Stack to store queue elements
        Node* temp = front;

        // Step 1: Push all queue elements into stack
        while (temp != NULL) {
            st.push(temp->data);
            temp = temp->next;
        }

        // Step 2: Pop from stack and replace queue data
        temp = front;
        while (temp != NULL) {
            temp->data = st.top();  // Get top element
            st.pop();               // Remove from stack
            temp = temp->next;
        }
    }


    void display(){
        if(front == NULL){
            cout<<"Queue Empty: "<<endl;
            return; 
        }else{
            Node* temp = front;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }cout<<"NULL"<<endl;
            getSize();

        }
    }
};


int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    q1.display();
    q1.reverse();
    q1.display();
    return 0;
    
}