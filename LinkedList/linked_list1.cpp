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
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }
        void inser(int data){
            Node* newNode = new  Node(data);

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
    LinkedList list;
    list.inser(10);
    list.inser(20);
    list.inser(30);

    list.display();
    return 0;
    
}