#include<iostream>
<<<<<<< HEAD
#include<vector>
using namespace std;

class Node{
    public: 
=======
using namespace std;

class Node{
    public:
>>>>>>> 0e27a40 (Reversing linkedlist 2)
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
<<<<<<< HEAD
        
=======
>>>>>>> 0e27a40 (Reversing linkedlist 2)
    public:
        LinkedList(){
            head = NULL;
            size = 0;
        }
<<<<<<< HEAD
=======
        
>>>>>>> 0e27a40 (Reversing linkedlist 2)
        void addLast(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
<<<<<<< HEAD
            }else{
                Node* temp = head;
                while (temp->next!=NULL){
=======
            } else {
                Node* temp = head;
                while(temp->next != NULL){
>>>>>>> 0e27a40 (Reversing linkedlist 2)
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            size++;
        }

<<<<<<< HEAD
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
=======
        void reverse(){
            if(head == NULL){
                cout<<"Empty list..."<<endl;
                return;
            }
            Node *prev = NULL;
            Node *curr = head;
            Node *next = NULL;

            while(curr != NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
        }

        int getSize(){
            return size;
        }

        void display(){
            Node* temp = head;
            while(temp != NULL){
>>>>>>> 0e27a40 (Reversing linkedlist 2)
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
<<<<<<< HEAD
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
=======
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

    cout<<"Original Linked List:"<<endl;
    l1.display();
    
    l1.reverse();
    
    cout<<"After Reversing:"<<endl;
    l1.display();

    return 0;
}
>>>>>>> 0e27a40 (Reversing linkedlist 2)
