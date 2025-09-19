#include <iostream>
using namespace std;

// Node class
class Node {
public:
    char data;
    Node* next;

    Node(char data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(char value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (!isEmpty()) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    char peek() {
        if (!isEmpty()) {
            return top->data;
        }
        return '\0';
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to check if two symbols match
bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

// Function to check balanced parentheses
bool isBalanced(string expression) {
    Stack s;
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If closing bracket, check top
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty() || !isMatching(s.peek(), ch)) {
                return false;
            }
            s.pop();
        }
    }

    // Stack should be empty at the end
    return s.isEmpty();
}

// Main function
int main() {
    string expr;
    cout << "Enter expression with brackets: ";
    cin >> expr;

    if (isBalanced(expr)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is NOT balanced." << endl;
    }

    return 0;
}
