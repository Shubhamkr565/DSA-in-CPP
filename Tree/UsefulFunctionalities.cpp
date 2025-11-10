#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int data){
        this->data = data;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

// Size of the Binary Tree
int size(Node* root){
    if(root==NULL)return 0;
    return 1+size(root->leftChild)+ size(root->rightChild);
}

//  Sum of All Nodes
int sum(Node* root){
    if(root == NULL)return 0;
    return  root->data+sum(root->leftChild )+ sum(root->rightChild);
}

// Count Leaf Nodes
int count(Node* root){
    if(root == NULL) return 0;
    if(root->leftChild == NULL && root->rightChild == NULL)return 1;
    return count(root->leftChild) + count(root->rightChild);
}

// Count Non-Leaf Nodes
int count_Non_leaf(Node* root){
    if(root == NULL) return 0;
    if(root->leftChild == NULL && root->rightChild == NULL)return 0;
    return 1+ count_Non_leaf(root->leftChild)+count_Non_leaf(root->rightChild);
}

// Depth and Height of Nodes in a Binary Tree

int height(Node* root){
    if(root == NULL)return -1;
    if(root->leftChild == NULL && root->rightChild == NULL) return 0;
    return 1+ max(height(root->leftChild), height(root->rightChild));
}

int depth(Node* root, int key, int level = 0) {
    if (root == NULL) return -1; // not found
    if (root->data == key) return level;

    // Search in left subtree
    int leftDepth = depth(root->leftChild, key, level + 1);
    if (leftDepth != -1) return leftDepth;

    // Search in right subtree
    return depth(root->rightChild, key, level + 1);
}




Node* insert(Node* root, int data){
    if(root == NULL) return new Node(data);
    
    if(data < root->data) {
        root->leftChild = insert(root->leftChild, data);
    }
    else if(data > root->data){
        root->rightChild = insert(root->rightChild, data);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->leftChild);
    cout<<root->data<<" ";
    inOrder(root->rightChild);
}
int main(){

    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 13);
    root = insert(root, 20);

    cout<<"Inorder Traversal Sorting: \n";
    inOrder(root);
    cout<<endl;

    cout << "Size of tree: " << size(root) << endl;
    cout << "Sum of all nodes: " << sum(root) << endl;
    cout << "Leaf nodes count: " << count(root) << endl;
    cout << "Non-leaf nodes count: " << count_Non_leaf(root) << endl;
    cout<<"Height of the Tree: "<<height(root)<<endl;

    return 0;
    
}