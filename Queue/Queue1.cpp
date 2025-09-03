#include<iostream>
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

class Queue {
private:
    Node* front;
    Node* rear;
    int size;

public:
    Queue() {
        front = rear = NULL;
        size = 0;
    }

    // Enqueue operation
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    // Dequeue operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow (Empty Queue)!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL; // Queue becomes empty
        }
        cout << "Dequeued: " << temp->data << endl;
        delete temp;
        size--;
    }

    // Peek front element
    int peekFront() {
        if (front == NULL) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return front->data;
    }

    // Peek rear element
    int peekRear() {
        if (rear == NULL) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return rear->data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == NULL);
    }

    // Get current size of queue
    int getSize() {
        return size;
    }

    // Display all elements
    void display() {
        if (front == NULL) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor (to free memory)
    ~Queue() {
        while (front != NULL) {
            dequeue();
        }
    }
};

int main() {
    Queue q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    cout << "Queue after enqueues: ";
    q1.display();

    cout << "Front element: " << q1.peekFront() << endl;
    cout << "Rear element: " << q1.peekRear() << endl;
    cout << "Queue size: " << q1.getSize() << endl;

    q1.dequeue();
    q1.dequeue();

    cout << "Queue after 2 dequeues: ";
    q1.display();

    cout << "Front element now: " << q1.peekFront() << endl;
    cout << "Rear element now: " << q1.peekRear() << endl;
    cout << "Queue size now: " << q1.getSize() << endl;

    cout << "Is queue empty? " << (q1.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
