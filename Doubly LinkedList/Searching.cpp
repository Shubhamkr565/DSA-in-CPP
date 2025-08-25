// Search for a value in a DLL and return its position.


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

        int indexOf(int data){
            Node* temp = head;
            int index = 0;
            while(temp!=NULL){
                if(temp->data == data) return index;
                temp = temp->next;
                index++;
            }
            return -1;
        }





        int getSize(){
            cout<<"Total size: ";
            return size;
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
        // void displayBackward(){
        //     Node* temp = tail;
        //     while(temp != NULL){
        //         cout<<temp->data<<"⇌";
        //         temp = temp->prev;
        //     }
        //     cout<<"NULL"<<endl;
        //     cout<<getSize();
        // }
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

    cout << endl << "Searching by index number: ";
    int pos = list1.indexOf(30);
    if (pos != -1)
        cout << "Element 30 found at index " << pos << endl;
    else
        cout << "Element not found" << endl;

}