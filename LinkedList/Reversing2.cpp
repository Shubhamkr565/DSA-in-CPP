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

    void insertAtLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        } else {
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
            cout<<"Empty!"<<endl;
            return;
        }
        Node* back = NULL;
        Node* current = head;
        Node* forward = NULL;

        while(current != NULL){
            forward = current->next;
            current->next = back;
            back = current;
            current = forward;
        }
        head = back;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
        cout<<"Total Size: "<<getSize()<<endl;
    }
};

int main(){
    LinkedList l1;

    l1.insertAtLast(10);
    l1.insertAtLast(20);
    l1.insertAtLast(30);
    l1.insertAtLast(40);
    l1.insertAtLast(50);

    cout<<"Before Reversing:\n";
    l1.display();

    l1.reverse();

    cout<<"After Reversing:\n";
    l1.display();

    return 0;
}
