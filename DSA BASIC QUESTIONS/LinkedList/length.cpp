// Find Length of a Linked List

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
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void length(){
        int count = 0;
        Node* temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout<<"Total length of this LinkedList Node: "<<count<<endl;
        
    }
    void display(){
        int count = 0;
        if(head == NULL){
            cout<<"Node is Empty: "<<endl;
        }
        Node* temp = head;
        while (temp != NULL)
        {
            count++;
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        cout<<"Total lenght: "<<count<<endl;
    }
};



int main(){
    LinkedList l1;
    l1.insertNode(10);
    l1.insertNode(20);
    l1.insertNode(30);
    l1.insertNode(40);
    l1.insertNode(50);

    l1.display();
    l1.length();
    return 0;
}