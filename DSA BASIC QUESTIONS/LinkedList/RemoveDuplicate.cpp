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
    void insertList(int data){
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

    void duplicate(){
        if(head == NULL){
            cout<<"Node is Empty: "<<endl;
            return;
        }
        Node* curr = head;
        while (curr->next != NULL)
        {
            if(curr->data == curr->next->data){
                curr->next = curr->next->next;
            }else{
                curr = curr->next;
            }
        }
        
    }

    void display(){
        if(head == NULL){
            cout<<"Node is Empty: "<<endl;
            return;
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

    l1.insertList(10);
    l1.insertList(20);
    l1.insertList(30);
    l1.insertList(30);
    l1.insertList(40);
    l1.insertList(50);

    l1.display();

    l1.duplicate();
    l1.display();
    return 0;
}