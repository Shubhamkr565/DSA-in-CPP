#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* leftChild;
    Node* rightChild;

    Node(int value){
        this->leftChild = NULL;
        this->rightChild = NULL;
        this->value = value;
    }
};

class PreOrderDFS{
    public:
    Node* root;

    PreOrderDFS(){
        root = NULL;
    }
};

// Recursive Preorder Traversal:

void traversePreOder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->value<<" ";
    traversePreOder(root->leftChild);
    traversePreOder(root->rightChild);
};


// Recursive Postorder Traversal:

void traversePostOrder(Node* root){
    if(root == NULL){
        return;
    }
    traversePostOrder(root->leftChild);
    traversePostOrder(root->rightChild);
    cout<<root->value<<" ";
}

// Recursive InOder Traversal

void traverseInOder(Node* root){
    if(root == NULL){
        return;
    }
    traverseInOder(root->leftChild);
    cout<<root->value<<" ";
    traverseInOder(root->rightChild);
}

int main(){
    Node* root = new Node(1);
    root->leftChild = new Node(2);
    root->rightChild = new Node(3);
    root->leftChild->leftChild = new Node(4);
    root->leftChild->rightChild = new Node(5);

    cout<<"Traverse PreOrder: "<<endl;
    traversePreOder(root);
    cout<<endl;
    cout<<"Traverse PostOrder: "<<endl;
    traversePostOrder(root);
    cout<<endl;
    cout<<"Traverse InOrder: "<<endl;
    traverseInOder(root);
    return 0;
}

