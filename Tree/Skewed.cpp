#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to create a right skewed tree
Node* createRightSkewedTree(int n) {
    if (n <= 0) return NULL;

    int val;
    cout << "Enter value for node 1: ";
    cin >> val;
    Node* root = new Node(val);
    Node* current = root;

    // Each node has only a right child
    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> val;
        current->right = new Node(val);
        current = current->right;
    }

    return root;
}

// Function to create a left skewed tree
Node* createLeftSkewedTree(int n) {
    if (n <= 0) return NULL;

    int val;
    cout << "Enter value for node 1: ";
    cin >> val;
    Node* root = new Node(val);
    Node* current = root;

    // Each node has only a left child
    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> val;
        current->left = new Node(val);
        current = current->left;
    }

    return root;
}

// Inorder traversal
void inorder(Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Main function
int main() {
    int n, choice;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Choose tree type:\n1. Right Skewed Tree\n2. Left Skewed Tree\nEnter your choice: ";
    cin >> choice;

    Node* root = NULL;

    if (choice == 1)
        root = createRightSkewedTree(n);
    else if (choice == 2)
        root = createLeftSkewedTree(n);
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << "\nInorder Traversal of the Skewed Tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
