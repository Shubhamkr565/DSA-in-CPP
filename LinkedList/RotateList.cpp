#include<iostream>
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

class list{
    public:
    Node* head;
    int size;
    
    list(){
        head = NULL;
        size = 0;
    }
    void insertList(int data){
        Node* newNode = new Node(data);
        if(head  == NULL){
            head = newNode;
            return;
        }else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }
        void rotateList(int p) {
            if (head == NULL || p == 0) return;

            // Step 1: Find length and last node
            Node* temp = head;
            int n = 1;
            while (temp->next != NULL) {
                temp = temp->next;
                n++;
            }

            // Connect last node to head (circular list temporarily)
            temp->next = head;

            // Step 2: Effective rotation
            p = p % n;
            int stepsToNewHead = n - p;

            // Step 3: Traverse to new head
            Node* newTail = head;
            for (int i = 1; i < stepsToNewHead; i++) {
                newTail = newTail->next;
            }

            // Step 4: Break the link
            head = newTail->next;
            newTail->next = NULL;
    }


    int getSize(){
        return size;
    }
    void display(){
        if(head == NULL){
            cout<<"Enpty list: \n";
            return;
        }
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
            
        }cout<<"NULL"<<endl;
        cout<<"Total Size: "<<getSize()<<endl;
    }
};

int main(){
    list l1;

    l1.insertList(10);
    l1.insertList(20);
    l1.insertList(30);
    l1.insertList(40);
    l1.insertList(50);
    
    l1.display();

    l1.rotateList(2);
    l1.display();
}