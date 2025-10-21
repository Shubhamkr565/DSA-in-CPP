#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        data = val;
        left = right = NULL;
        height = 1; // Initially height = 1
    }
};

// Utility to get height
int getHeight(Node* n) {
    if (n == NULL) return 0;
    return n->height;
}

// Utility to get balance factor
int getBalance(Node* n) {
    if (n == NULL) return 0;
    return getHeight(n->left) - getHeight(n->right);
}

// Utility to get max
int max(int a, int b) {
    return (a > b) ? a : b;
}

// ✅ LL Rotation
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    // Return new root
    return x;
}

// Simple insert (no balancing except LL)
Node* insert(Node* node, int key) {
    if (node == NULL)
        return new Node(key);

    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else
        return node; // duplicates not allowed

    // Update height
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // Get balance factor
    int balance = getBalance(node);

    // If unbalanced and Left Left Case
    if (balance > 1 && key < node->left->data)
        return rightRotate(node);

    return node;
}

// Print preorder traversal
void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Main function
int main() {
    Node* root = NULL;

    // Creating LL imbalance
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10); // Causes LL rotation

    cout << "Preorder traversal after LL rotation:\n";
    preOrder(root);
    cout << endl;

    return 0;
}
