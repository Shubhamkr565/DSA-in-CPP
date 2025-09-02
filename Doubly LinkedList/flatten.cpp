// Flatten a Double Linked List

#include <bits/stdc++.h>
using namespace std;

// Node definition
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = nullptr;
        next = nullptr;
        child = nullptr;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;
        dfs(head);
        return head;
    }

private:
    // helper function: returns tail after flattening
    Node* dfs(Node* node) {
        Node* curr = node;
        Node* last = nullptr;

        while (curr) {
            Node* next = curr->next;

            // If current node has a child
            if (curr->child) {
                Node* childHead = curr->child;
                Node* childTail = dfs(childHead);

                // Connect curr with childHead
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = nullptr; // remove child pointer

                // Connect childTail with next
                if (next) {
                    childTail->next = next;
                    next->prev = childTail;
                }
                last = childTail; // update last node
            } else {
                last = curr; // update last as current
            }
            curr = next; // move forward
        }
        return last;
    }
};

// Utility: print flattened list
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    /*
       Example:
       1 - 2 - 3 - 4 - 5
               |
               6 - 7
       After flatten:
       1 - 2 - 3 - 6 - 7 - 4 - 5
    */

    // Create nodes
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);

    // Link main list
    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;
    n3->next = n4; n4->prev = n3;
    n4->next = n5; n5->prev = n4;

    // Add child
    n3->child = n6;
    n6->next = n7; n7->prev = n6;

    // Flatten
    Solution sol;
    Node* flatHead = sol.flatten(n1);

    // Print result
    cout << "Flattened list: ";
    printList(flatHead);

    return 0;
}
