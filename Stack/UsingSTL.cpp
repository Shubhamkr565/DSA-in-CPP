#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Declare stack of integers
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // should print 30

    // Pop element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // should print 20

    // Size of stack
    cout << "Stack size: " << s.size() << endl;

    // Check if empty
    if(s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    // Display all elements (by popping)
    cout << "Stack elements (top to bottom): ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
