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
    public:
        Node* head;

    LinkedList(){
        head = NULL;
    }
    void insertAtLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void printList(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        
    }
    void reverseList(){
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = NULL;

        while (current != NULL)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }
};


int main(){
    LinkedList list1;

    list1.insertAtLast(10);
    list1.insertAtLast(20);
    list1.insertAtLast(30);
    list1.insertAtLast(40);
    list1.insertAtLast(50);

    cout<<"Original Linkedlist: ";
    list1.printList();

    cout<<endl<<"Reverse LinkedList: ";
    list1.reverseList();
    list1.printList();
    
    
}