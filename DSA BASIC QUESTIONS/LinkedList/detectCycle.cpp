// Detect a cycle (slow/fast pointers).


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

    bool detectCycle(){
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast){
                cout << "Cycle present" << endl;
                return true;
            }
        }
        cout << "Cycle not present" << endl;
        return false;
    }
};

int main(){
    LinkedList l1;

    Node* first  = new Node(10);
    Node* second = new Node(20);
    Node* third  = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth  = new Node(50);

    // linking nodes
    l1.head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // creating cycle
    fifth->next = third;   // cycle here ✅

    l1.detectCycle();

    return 0;
}
