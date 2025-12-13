// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void printList(Node* head){
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
    
// }

// int main(){
//     Node* first = new  Node(10);
//     Node* second = new  Node(20);
//     Node* third = new  Node(30);
//     Node* four = new  Node(40);

//     first->next = second;
//     second->next = third;
//     third->next = four;

//     printList(first);
//     return 0;
// }

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};

class Linklist{
    public:
        Node* head;

        Linklist(){
            head = NULL;
        }
        void insert(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        void display(){
            Node* temp  = head;
            while (temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    Linklist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.display();
    return 0;
    
}