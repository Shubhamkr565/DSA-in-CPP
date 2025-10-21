#include <iostream>
using namespace std;

// ------------------------------
// Node class
// ------------------------------
class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

// ------------------------------
// Utility functions
// ------------------------------
int getHeight(Node* root) {
    if (root == NULL) return 0;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

int getBalance(Node* root) {
    if (root == NULL) return 0;
    return getHeight(root->left) - getHeight(root->right);
}

// ------------------------------
// Rotations
// ------------------------------
Node* rightRotation(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    return x; // x becomes new root
}

Node* leftRotation(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    return y; // y becomes new root
}

// ------------------------------
// Insertion in AVL Tree
// ------------------------------
Node* insertAVL(Node* root, int key) {
    // Step 1: Perform normal BST insertion
    if (root == NULL)
        return new Node(key);

    if (key < root->value)
        root->left = insertAVL(root->left, key);
    else if (key > root->value)
        root->right = insertAVL(root->right, key);
    else
        return root; // Duplicate keys not allowed

    // Step 2: Get balance factor
    int balance = getBalance(root);

    // Step 3: Check 4 rotation cases

    // Left Left Case
    if (balance > 1 && key < root->left->value)
        return rightRotation(root);

    // Right Right Case
    if (balance < -1 && key > root->right->value)
        return leftRotation(root);

    // Left Right Case
    if (balance > 1 && key > root->left->value) {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right Left Case
    if (balance < -1 && key < root->right->value) {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    return root; // Return unchanged root
}

// ------------------------------
// Traversal
// ------------------------------
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

// ------------------------------
// Main
// ------------------------------
int main() {
    Node* root = NULL;

    root = insertAVL(root, 10);
    root = insertAVL(root, 20);
    root = insertAVL(root, 30);
    root = insertAVL(root, 40);
    root = insertAVL(root, 50);
    root = insertAVL(root, 25);
    root = insertAVL(root, 80);

    cout << "AVL Tree (Inorder Traversal) after insertion:\n";
    inorder(root);
    cout << endl;

    return 0;
}
