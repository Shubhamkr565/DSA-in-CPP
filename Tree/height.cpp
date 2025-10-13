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

int height(Node* root){
    if(root == NULL)return -1;
    if(root->leftChild == NULL && root->rightChild == NULL)return 0;

    return 1+max(height(root->leftChild), height(root->rightChild));
}



int main(){

    Node* root = new Node(20);
    root->leftChild = new Node(10);
    root->rightChild = new Node(30);
    root->leftChild->leftChild = new Node(6);
    root->leftChild->rightChild = new Node(21);
    root->rightChild->leftChild = new Node(4);
    root->leftChild->leftChild->leftChild = new Node(3);
    root->leftChild->leftChild->rightChild = new Node(8);

    cout<<"Height of the tree = "<<height(root)<<endl;

}