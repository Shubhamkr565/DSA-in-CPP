#include<iostream>
#include<vector>
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

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int size;
    
    public:
        LinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
        void addHead(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            size++;
        }
        void addLast(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            size++;
        }
        void addFirst(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
            size++;
        }
        void removeFirst(){
            if(head == NULL){
                cout<<"Empty data (NULL): ";
                return;
            }else{
                Node* temp = head;
                head = head->next;
                delete temp; 
            }
            size--;
        }

        void removeLast(){
            if(head == NULL){
                cout<<"Empty data (NULL): ";
                return;
            }else{
                Node* temp = head;
                while(temp->next->next != NULL){
                    temp = temp->next;
                }
                temp = temp->next = NULL;
            }
            size--; 

        }

        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;

        }
        int getSize(){
            return size;
        }

};


int main(){
    LinkedList l1;

    cout<<"Add Head data: ";
    l1.addHead(50);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Add Last data: ";
    l1.addLast(100);
    l1.addLast(200);
    l1.addLast(300);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;
    

    cout<<endl<<"Add First data: ";
    l1.addFirst(20);
    l1.addFirst(30);
    l1.addFirst(40);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Print all Added data: ";
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Remove first data: ";
    l1.removeFirst();
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Remove Last data: ";
    l1.removeLast();
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    
}