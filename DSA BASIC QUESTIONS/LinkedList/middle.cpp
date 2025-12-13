// Find the middle element.

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

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }
    void insertNode(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void middele(){
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"Middle Element: "<<slow->data<<endl;
        
    }
    
    void display(){
        if(head == NULL){
            cout<<"Node is Empty: "<<endl;
        }
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    LinkedList l1;  
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(30);
    l1.insertNode(40);
    l1.insertNode(50);
    l1.insertNode(60);

    l1.display();
    l1.middele();
    
    return 0;    
}