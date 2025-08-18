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
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Add at beginning
    void addHead(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    // Add at end
    void addLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    // Insert at any index
    void insertAnyposition(int index, int data){
        if(index < 0 || index > size){
            cout<<"Error! Invalid Index"<<endl;
            return;
        }
        if(index == 0){
            addHead(data);
            return;
        }
        if(index == size){
            addLast(data);
            return;
        }
        Node* newNode = new Node(data);
        Node* current = head;
        for(int i = 0; i < index - 1; i++){
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        size++;
    }

    // Delete at head
    void deleteHead(){
        if(head == NULL){
            cout<<"Error: Node is Already Empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    // Delete at tail
    void deleteLast(){
        if(head == NULL){
            cout<<"Error: Node is Already Empty"<<endl;
            return;
        }
        if(head->next == NULL){  // only one node
            delete head;
            head = NULL;
            tail = NULL;
        } else {
            Node* temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
            tail = temp;
        }
        size--;
    }

    // Delete at any position
    void deleteAtPosition(int index){
        if(head == NULL){
            cout<<"Error: List is Empty"<<endl;
            return;
        }
        if(index < 0 || index >= size){
            cout<<"Error: Invalid Index"<<endl;
            return;
        }
        if(index == 0){
            deleteHead();
            return;
        }
        Node* current = head;
        for(int i = 0; i < index - 1; i++){
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        if(temp == tail){
            tail = current;
        }
        delete temp;
        size--;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    int getSize(){
        return size;
    }
};

int main(){
    LinkedList l1;

    cout<<"Add Head data: ";
    l1.addHead(50);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Add Last data: ";
    l1.addLast(100);
    l1.addLast(200);
    l1.addLast(300);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Add at Head again: ";
    l1.addHead(20);
    l1.addHead(30);
    l1.addHead(40);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Insert newNode at various positions: "<<endl;
    l1.insertAnyposition(0, 25);    // beginning
    l1.insertAnyposition(l1.getSize(), 600); // end
    l1.insertAnyposition(3, 1600);  // middle
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Deleting Nodes"<<endl;

    cout<<"Delete Head:"<<endl;
    l1.deleteHead();
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<"Delete Last:"<<endl;
    l1.deleteLast();
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<"Delete at position 2:"<<endl;
    l1.deleteAtPosition(2);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    return 0;
}
