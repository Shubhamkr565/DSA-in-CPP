// Inserting at Last/end:

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

class Linkedlist{
    public:
        Node* head;
        Linkedlist(){
            head = NULL;
        }
        void insert(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return ;
            }
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
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
    Linkedlist list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insert(60);
    

    list.display();

    return 0;
}