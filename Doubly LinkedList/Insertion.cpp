// Insertion

// Insert a node at the beginning of a DLL.

// Insert a node at the end of a DLL.

// Insert a node at a given position (index) in a DLL.

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

class DoubleLinkedList{
    private:
        Node* head;
        Node* tail;
        int size;
    public:
        DoubleLinkedList(){
            head = NULL;
            tail = NULL;
            size = 0;
        }
        void insertAtBeginning(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            size++;
        }


        void insertAtEnd(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;   
                newNode->prev = tail;
                tail = newNode;
            }
            size++;
        }
        void insertAnyPosition(int index, int data){
            if(index < 0 || index > size){
                cout<<"Invalid index"<<endl;
                return;
            }
            if(index == 0){
                insertAtBeginning(data);
                return;
            }
            if(index == size){
                insertAtEnd(data);
                return;
            }
            Node* newNode = new Node(data);
            Node* temp = head;
            for(int i=0; i<index-1; i++){
                temp = temp->next;
            }   
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            size++;
        }
        int getSize(){
            cout<<"Total size: ";
            return size;
        }
        void displayForward(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ⇌ ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
        void displayBackward(){
            Node* temp = tail;
            while(temp != NULL){
                cout<<temp->data<<" ⇌ ";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
};




int main(){
    DoubleLinkedList list1;

    list1.insertAtEnd(10);
    list1.insertAtEnd(20);
    list1.insertAtEnd(30);
    list1.insertAtEnd(40);
    list1.insertAtEnd(50);
    list1.insertAtEnd(60);

    list1.insertAtBeginning(1);
    list1.insertAtBeginning(2);
    list1.insertAtBeginning(3);
    list1.insertAtBeginning(4);
    list1.insertAtBeginning(5);
    list1.insertAtBeginning(6);


    list1.insertAnyPosition(4, 100);

    
    
    cout<<"Display Forward Double LinkedList: ";
    list1.displayForward();

    cout<<endl<<"Display Backward Double LinkedList: ";
    list1.displayBackward();
}