// Deletion

// Delete the first node in a DLL.

// Delete the last node in a DLL.

// Delete a node from a specific position (index) in a DLL.

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
        void insertAtEnd(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;   
                newNode->prev = tail;
                tail = newNode;
            }
            size++;
        }
        int getSize(){
            cout<<"Total size: ";
            return size;
        }

        void removeFirst(){
            if(head == NULL){
                cout<<"List is Empty:"<<endl;
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
            }else{
                Node* temp = head;
                head = head->next;
                head->prev = NULL;
                delete temp;
            }
            size--;
        }
        void removeLast(){
            if(head == NULL){
                cout<<"List is Empty:";
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
            }else{
                Node* temp = tail;
                tail = tail->prev;
                tail->next = NULL;
                delete temp;
            }
            size--;
        }
        void deleteAnyPosition(int index){
            if(index <0 || index >= size){
                cout<<"Invalid Index";
                return;
            }
            if(index == 0){
                removeFirst();
                return;
            }
            if(index == size-1){
                removeLast();
                return;
            }
            Node* temp = head;
            for(int i=0; i< index; i++){
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            size--;
        }

        void displayForward(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<"⇌";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
        void displayBackward(){
            Node* temp = tail;
            while(temp != NULL){
                cout<<temp->data<<"⇌";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
            cout<<getSize();
        }
};




int main(){
    DoubleLinkedList list1;

    list1.insertAtEnd(10);
    list1.insertAtEnd(20);
    list1.insertAtEnd(30);
    list1.insertAtEnd(40);
    list1.insertAtEnd(50);
    list1.insertAtEnd(60);
    
    cout<<"Display Forward Double LinkedList: ";
    list1.displayForward();

    // cout<<endl<<"Display Backward Double LinkedList: ";
    // list1.displayBackward();

    cout<<endl<<"Remove First elements: ";
    list1.removeFirst();
    list1.displayForward();


    cout<<endl<<"Remove Last elements: ";
    list1.removeLast();
    list1.displayForward();

    cout<<endl<<"Remove any position elements: ";
    list1.deleteAnyPosition(3);
    list1.displayForward();
}