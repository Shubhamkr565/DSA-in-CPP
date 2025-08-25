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

        void insertAtLast(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            size++;
        }
        void displayForward(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data <<"⇄";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;

        }
};

int main(){
    DoubleLinkedList list1;

    list1.insertAtLast(10);
    list1.insertAtLast(20);
    list1.insertAtLast(30);
    list1.insertAtLast(40);
    list1.insertAtLast(50);

    list1.displayForward();
}