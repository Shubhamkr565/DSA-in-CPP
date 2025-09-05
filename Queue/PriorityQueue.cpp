#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        int priority;
        Node* next;

        Node(int data, int p){
            this->data = data;
            this->priority = p;
            this->next = NULL;
        }
};

class PriorityQueue{
    private:
        Node* front;
        int size;
    public:
        PriorityQueue(){
            front = NULL;
            size = 0;
        }
        void Enqueue(int data, int p){
            Node* newNode = new Node(data, p);
            // if empty or higher priority than front;
            if(front == NULL || p<front->priority){
                newNode->next = front;
                front = newNode;
            }else{
                Node* temp = front;
                // find correct position
                while(temp->next != NULL && temp->next->priority <= p){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
            size++;
        }
        void Peek(){
            if(front == NULL){
                cout<<"Priority Queue is empty: NO peek data.\n";
                return;
            }
            cout<<front->data<<", P="<<front->priority<<" is peek data.\n";
        }


        void Dequeue(){
            if(front == NULL){
                cout<<"Priority Queue is Empty: \n";
                return;
            }
            Node* temp = front;
            cout<<front->data<<", P="<<front->priority<< " is removed successfully....\n";
            front = front->next;
            delete temp;
            size--;
        }

        // Check if empty
        bool isEmpty() {
            return front == NULL;
        }

        // Return size
        int getSize() {
            return size;
        }
        void Display(){
            if(front == NULL){
                cout<<"Priority queue is Empty. \n";
                return ;
            }
            Node* temp = front;
            cout<<"Priority Queue: \n";
            while(temp != NULL){
                cout<<"("<<temp->data<< ", P="<<temp->priority<<")"<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL \n";
            cout<<"Priority Queue Size: "<<getSize()<<endl;
        }
};



int main(){
    PriorityQueue p1;

    p1.Enqueue(10,1);
    p1.Enqueue(20,2);
    p1.Enqueue(30,5);
    p1.Enqueue(40,4);
    p1.Enqueue(50,3);
    
    p1.Display();
    p1.Dequeue();

    p1.Peek();
    
    p1.Display();
}