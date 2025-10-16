#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int data) {
        this->data = data;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};
// size of Nodes.
int size(Node* root){
    if(root == NULL)return 0;
    return 1 + size(root->leftChild)+size(root->rightChild);
}

// sum of Nodes.
int sum(Node* root) {
    if (root == NULL)
        return 0;
    return root->data + sum(root->leftChild) + sum(root->rightChild);
}

// Count Leaf Nodes
int count(Node* root){
    if(root == NULL)return 0;
    if(root->leftChild == NULL && root->rightChild == NULL)return 1;
    return count(root->leftChild + count(root->rightChild));
}

int main() {
    Node* root = new Node(1);
    root->leftChild = new Node(2);
    root->rightChild = new Node(3);
    root->leftChild->leftChild = new Node(4);
    root->rightChild->rightChild = new Node(5);

    cout<<"\nSize of All Tree Nodes: "<<size(root);

    cout << "\nSum of All Tree Nodes: " << sum(root);
    
    cout<<" \nCountLeaf Node : "<<count(root);

    return 0;

}
