#include<iostream>
using namespace std;

// Node class represents one element/node of the linked list
class Node{
    public:
        int data;     // value of the node
        Node* next;   // pointer to the next node

        // constructor to initialise node with given data
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

// linkedList class to manage nodes
class linkedList{
    private:
        Node* head;    // starting point of linked list
        Node* tail;    // last node of linked list
        int size;      // total number of nodes

    public:
        // constructor to initialise empty linked list
        linkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }

    // Insert new node at the end of the linked list
    void insertAtLast(int data){
        Node* newNode = new Node(data);  // create a new node
        if(head == NULL){  // if list is empty
            head = newNode;
            tail = newNode;
        }else{             // otherwise add at the end
            tail->next = newNode;
            tail = newNode;
        }
        size++; // increase size
    }

    // Insert new node at the beginning of the linked list
    void insertAtBegining(int data){
        Node* newNode = new Node(data);
        if(head == NULL){   // if list is empty
            head = newNode;
            tail = newNode;
        }else{              // insert before current head
            newNode->next = head;
            head = newNode;
        }
        size++;  // increase size
    }

    // display the linked list
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->"; // print node's
