#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert node at the end of the list
    void insertAtLast(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Print the linked list
    void printList() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data;
            if(temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Function to merge two sorted linked lists
Node* mergeTwoLists(Node* l1, Node* l2) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(l1 != NULL && l2 != NULL) {
        if(l1->data < l2->data) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    // Attach remaining nodes
    if(l1 != NULL) temp->next = l1;
    if(l2 != NULL) temp->next = l2;

    return dummy->next;
}



int main(){
    LinkedList list1, list2;

    // Inserting elements into first sorted list
    list1.insertAtLast(1);
    list1.insertAtLast(3);
    list1.insertAtLast(5);
    list1.insertAtLast(7);


    // Inserting elements into second sorted list
    list2.insertAtLast(2);
    list2.insertAtLast(4);
    list2.insertAtLast(6);
    list2.insertAtLast(8);


    cout << "List 1: ";
    list1.printList();
    cout << "List 2: ";
    list2.printList();

    Node* mergedHead = mergeTwoLists(list1.head, list2.head);

    // Print merged list
    cout << "Merged List: ";
    Node* temp = mergedHead;
    while(temp != NULL) {
        cout << temp->data;
        if(temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}