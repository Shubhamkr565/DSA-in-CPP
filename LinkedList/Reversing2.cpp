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
private:
    Node* head;
    int size;

public:
    LinkedList(){
        head = NULL;
        size = 0;
    }

    void addLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    int getSize(){
        return size;
    }

    void reverse(){
        if(head == NULL){
            cout<<"Empty list...\n";
            return;
        }
        Node* prev = NULL;
        Node* curr = head;
        Node* nxt  = NULL;

        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
        cout<<"Size: "<<getSize()<<endl;
    }
};

int main(){
    LinkedList l1;

    l1.addLast(10);
    l1.addLast(20);
    l1.addLast(30);
    l1.addLast(40);
    l1.addLast(50);
    l1.addLast(60);

    cout<<"Original Linked List:\n";
    l1.display();

    l1.reverse();

    cout<<"\nAfter Reversing:\n";
    l1.display();

    return 0;
}
