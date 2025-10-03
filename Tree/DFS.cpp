// Depth-First Traversal (DFS)
// There are three main types:
// Pre-order Traversal (Root first), Post-order Traversal (Root last), In-order Traversal (Root in middle)


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

bool isEmpty(Node* root){
    return root == NULL;
}

void preOrder(Node* root){
    if(isEmpty(root)) return ;
    
    cout<<root->data<<" ";
    preOrder(root->leftChild);
    preOrder(root->rightChild);
}

void PostOrder(Node* root){
    if(isEmpty(root)) return ;

    PostOrder(root->leftChild);
    PostOrder(root->rightChild);
    cout<<root->data<<" ";
}
void InOrder(Node* root){
    if(isEmpty(root))return;
    InOrder(root->leftChild);
    cout<<root->data<<" ";
    InOrder(root->rightChild);
}

int main(){
    /* Example Tree:
            1
           / \
          2   3
         /     \
        4       5
    */

    Node* root = new Node(1);
    root->leftChild = new Node(2);
    root->rightChild = new Node(3);
    root->leftChild->leftChild = new Node(4);
    root->rightChild->rightChild = new Node(5);

    cout << "Preorder Traversal: ";
    preOrder(root);

    cout<<endl<<"PostOrder Traversal: ";
    PostOrder(root);

    cout<<endl<<"InOrder Traversal: ";
    InOrder(root);

    return 0;
}