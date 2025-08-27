#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push operation
    void push(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        cout << data << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty. Cannot pop!" << endl;
            return;
        }
        Node* temp = top;
        cout << top->data << " is popped from stack." << endl;
        top = top->next;
        delete temp;
    }

    // Peek operation
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }

    // Display stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements (Top -> Bottom): ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    s1.display();

    s1.pop();
    s1.display();

    s1.peek();

    return 0;
}
