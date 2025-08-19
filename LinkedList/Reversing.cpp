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
            }else{
                Node* temp = head;
                while (temp->next!=NULL){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            size++;
        }

        void reversing(){
            if(head == NULL){
                cout<<"Empty!";
                return;
            }
            Node* back = NULL;
            Node* current = head;
            Node* forward = NULL;

            while (current != NULL)
            {
                forward = current->next;
                current->next = back;
                back = current;
                current = forward;
            }
            head = back;
            
        };



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
    LinkedList L1;

    L1.addLast(10);
    L1.addLast(20);
    L1.addLast(30);
    L1.addLast(40);
    L1.addLast(50);
    L1.addLast(60);
    L1.addLast(70);
    

    L1.display();
    L1.reversing();
    L1.display();   
}