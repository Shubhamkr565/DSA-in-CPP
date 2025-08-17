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
        void addHead(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            size++;
        }
        void addEnd(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                newNode = tail;
            }
            size++;
        }
        void addBegining(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
            size++;
        }
        void removefirst(){
                        display();
            if(head == NULL){
                cout<<"LinkedList is empty: ";
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
            }else{
                Node* temp = head;
                head = head->next;
                delete temp;
            }

            cout<<"Remove first Node"<<endl;
            size--;
        }
        

        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};




int main(){
    LinkedList l1;

    l1.addHead(50);
    l1.addEnd(100);
    l1.addBegining(25);

    l1.removefirst();

    l1.display();
}