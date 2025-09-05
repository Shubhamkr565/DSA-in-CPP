#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() { }
    
    // Push element onto stack
    void push(int x) {
        // Step 1: Push new element into q2
        q2.push(x);

        // Step 2: Move everything from q1 -> q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap q1 and q2
        swap(q1, q2);
    }
    
    // Removes top element and returns it
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    // Get top element
    int top() {
        return q1.front();
    }
    
    // Check if stack is empty
    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack st;

    cout << "Pushing 10, 20, 30 onto stack...\n";
    st.push(10);  // stack: [10]
    st.push(20);  // stack: [20,10]
    st.push(30);  // stack: [30,20,10]

    cout << "Top element: " << st.top() << endl;   // 30
    cout << "Pop element: " << st.pop() << endl;   // 30

    cout << "Top element: " << st.top() << endl;   // 20
    cout << "Pop element: " << st.pop() << endl;   // 20

    cout << "Pop element: " << st.pop() << endl;   // 10

    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
