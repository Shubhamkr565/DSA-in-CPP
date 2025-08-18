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
        int size;
        LinkedList(){
            head = NULL;
            size = 0;
        }
        void insertAtLast(int data){
            Node* newNode = new Node(data);

            if(head == NULL){
                head= newNode;
                size++;
                return ;
            }
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            size++;
        }
        int getSize(){
            return size;
        }

        void getIndex(int index){
            if(index < 0 || index > size-1){
                cout<<"Invalid Index"<<endl;
                return ;
            }else{
                Node* current = head;
                for(int i=0; i<index; i++){
                    current = current->next;
                }
                cout<<"Index: "<<index<<"  Value: "<<current->data<<endl;;
            }
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
    LinkedList L1;
    L1.insertAtLast(10);
    L1.insertAtLast(20);
    L1.insertAtLast(30);
    L1.insertAtLast(40);
    L1.insertAtLast(50);
    L1.insertAtLast(60);

    
    

    cout<<endl<<"Size: "<<L1.getSize()<<endl;
    L1.display();
    L1.getIndex(2);

    return 0;
}