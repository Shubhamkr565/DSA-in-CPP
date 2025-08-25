// Write a program to create a doubly linked list and traverse it (forward and backward).
// Print all elements of a DLL.

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

class DoubleLinkedList{
    private:
        Node* head;
        Node* tail;
        int size;
    public:
        DoubleLinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
        void insertAtEnd(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;   
                newNode->prev = tail;
                tail = newNode;
            }
            size++;
        }
        int getSize(){
            cout<<"Total size: ";
            return size;
        }
        void displayForward(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<"⇌";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
        void displayBackward(){
            Node* temp = tail;
            while(temp != NULL){
                cout<<temp->data<<"⇌";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
};




int main(){
    DoubleLinkedList list1;

    list1.insertAtEnd(10);
    list1.insertAtEnd(20);
    list1.insertAtEnd(30);
    list1.insertAtEnd(40);
    list1.insertAtEnd(50);
    list1.insertAtEnd(60);
    
    cout<<"Display Forward Double LinkedList: ";
    list1.displayForward();

    cout<<endl<<"Display Backward Double LinkedList: ";
    list1.displayBackward();
}