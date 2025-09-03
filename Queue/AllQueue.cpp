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
                cout<<"Queue underFlow!...(No data) "<<endl;
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
                cout<<"Queue Empty: No peek element: "<<endl;
                return;
            }else{
                cout<<front->data<<" is peek element in the queue"<<endl;
            }
        }
        int getSize(){
            cout<<"Totla Size: "<<size<<endl;
            return size; 
        }
        void display(){
            if(front == NULL){
                cout<<"Queue Empty:..."<<endl;
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

    q1.dequeue();

    q1.display();

    q1.peek();

}