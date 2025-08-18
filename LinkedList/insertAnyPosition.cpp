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
        void addLast(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            size++;
        }
        void addFirst(int data){
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
        void insertAnyposition(int index, int data){
            if(index < 0 || index > size){
                cout<<"Error! Invalid Index"<<endl;
                return;
            }
            if(index == 0){
                addFirst(data);
                return;
            }
            if(index == size){
                addLast(data);
                return ;
            }
            Node* newNode = new Node(data);
            Node* current = head;
            for(int i=0; i<index-1; i++){
                current = current->next;
            }
            newNode->next = current->next;
            current->next= newNode;
            size++;
        }
        

        void display(){
            Node* temp = head;
            while(temp!=NULL){
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
    

    cout<<endl<<"Add First data: ";
    l1.addFirst(20);
    l1.addFirst(30);
    l1.addFirst(40);
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<endl<<"Print all Added data: ";
    l1.display();
    cout<<"Size: "<<l1.getSize()<<endl;

    cout<<"Insert newNode: "<<endl;
    l1.insertAnyposition(0, 25);
    l1.display();
    l1.insertAnyposition(8, 600);
    l1.insertAnyposition(3, 1600);

    l1.display();
}