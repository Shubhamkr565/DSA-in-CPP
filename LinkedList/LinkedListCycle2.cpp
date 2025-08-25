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

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        void insertAtLast(int data){
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

        void createCycle(int pos){
            if(pos < 0) return;

            Node* cycleNode = head;
            for(int i = 0; i < pos && cycleNode != NULL; i++){
                cycleNode = cycleNode->next;
            }
            if(cycleNode == NULL) return; // pos out of range

            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = cycleNode;  // connect tail to pos node
        }

        Node* hasCycle(){
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if(slow == fast){
                    slow = head;
                    while(slow != fast){
                        slow = slow->next;
                        fast = fast->next;
                    }
                    return slow;   // cycle entry point
                }
            }
            return NULL;
        }

        void printlist(){
            Node* temp = head;
            int count = 0;
            while(temp != NULL && count < 20){
                cout<<temp->data<<"->";
                temp = temp->next;
                count++;
            }
            cout<<"NULL (stopped)"<<endl;
        }
};

int main(){
    LinkedList l1;

    l1.insertAtLast(10);
    l1.insertAtLast(20);
    l1.insertAtLast(30);
    l1.insertAtLast(40);
    l1.insertAtLast(50);
    l1.insertAtLast(60);

    l1.printlist();

    l1.createCycle(2);  // connect tail to node at index 2 (30)

    Node* cycleStart = l1.hasCycle();
    if(cycleStart != NULL)
        cout << "Cycle starts at node with value: " << cycleStart->data << endl;
    else
        cout << "No cycle detected" << endl;

    l1.printlist(); // stops after 20 prints

    return 0;
}
