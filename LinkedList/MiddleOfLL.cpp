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
    LinkedList(){        // ✅ Constructor (no return type)
        head = NULL;
        size = 0;
    }

    void addLast(int data){
        Node* newNode = new Node(data); // ✅ new Node pointer
        if(head == NULL){
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    void middleList(){
        Node* slow = head;
        Node* fast = head;

        // ✅ find middle
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slow != NULL)
            cout<<slow->data<<endl;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
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

    cout<<"Original List:"<<endl;
    l1.display();
    cout<<"Middle of this list: ";
    l1.middleList();

    return 0;
}
