#include <iostream>
using namespace std;

// Node class for doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Deque using doubly linked list
class LinkedListDeque {
private:
    Node* front;
    Node* rear;  
    int size;    

public:
    LinkedListDeque() {
        front = rear = NULL;
        size = 0;
    }

    bool isEmpty() { 
	return front == NULL; 
     }
    int getSize() {
	 return size; 
     }

    
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        size++;
        cout << "Inserted at front: " << val << endl;
    }

    
    void insertRear(int val) {
        Node* newNode = new Node(val);
     
       if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
        cout << "Inserted at rear: " << val << endl;
    }

  
    int deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty! Cannot delete front.\n";
            return -1;
        }

        Node* current = front;
        int val = current->data;

        if (front == rear) {  // only one node
            front = rear = NULL;
        } else {
            front = front->next;
            front->prev = NULL;
        }

        delete current;
        size--;
        cout << "Deleted from front: " << val << endl;
        return val;
    }

    
    int deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty! Cannot delete rear.\n";
            return -1;
        }

        Node* current = rear;
        int val = current->data;

        if (front == rear) {  // only one node
            front = rear = NULL;
        } else {
            rear = rear->prev;
            rear->next = NULL;
        }

        delete current;
        size--;
        cout << "Deleted from rear: " << val << endl;
        return val;
    }

   
    int peekFront() {
        if (isEmpty()) {
            cout << "Deque is empty!\n";
            return -1;
        }
        return front->data;
    }

   
    int peekRear() {
        if (isEmpty()) {
            cout << "Deque is empty!\n";
            return -1;
        }
        return rear->data;
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty!\n";
            return;
        }
        cout << "Deque elements: ";
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {
    LinkedListDeque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);
    dq.display();  // 2 5 10 20

    dq.deleteFront(); // removes 2
    dq.deleteRear();  // removes 20
    dq.display();     // 5 10

    cout << "Front element: " << dq.peekFront() << endl; // 5
    cout << "Rear element: " << dq.peekRear() << endl;   // 10

    dq.insertRear(30);
    dq.insertFront(1);
    dq.display(); // 1 5 10 30

    return 0;
}

