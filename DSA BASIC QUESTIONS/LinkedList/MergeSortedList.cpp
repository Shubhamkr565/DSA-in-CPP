// Merge two sorted linked lists.

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

    Node* mergeList(Node* l1,Node* l2){
        Node* dummy = new Node(-1);
        Node* tail = dummy;

        while (l1 != NULL && l2 != NULL)
        {
            if(l1->data <= l2->data){
                tail->next = l1;
                l1 = l1->next;
            }else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        if(l1 != NULL){
            tail->next = l1;
        }else{
            tail->next = l2;
        }
        return dummy->next;
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
    LinkedList l2;

    l1.insertList(1);
    l1.insertList(3);
    l1.insertList(5);
    l1.insertList(7);
    l1.insertList(9);
    
    l1.display();

    l2.insertList(2);
    l2.insertList(4);
    l2.insertList(6);
    l2.insertList(8);
    l2.insertList(10);
    
    l2.display();

    Node* mergehead = l1.mergeList(l1.head,l2.head);

    cout<<"Merge Sorted List: "<<endl;
    Node* temp= mergehead;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
    

    return 0;
}