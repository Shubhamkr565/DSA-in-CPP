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

void printNodeAtDistance(Node* root, int distance){
    if(!root)return;
    if(distance == 0){
        cout<<root->data<<" ";
        return;
    }
    printNodeAtDistance(root->leftChild, distance-1);
    printNodeAtDistance(root->rightChild, distance-1);
}

int height(Node* root){
    if(!root)return -1;
    return 1+max(height(root->leftChild), height(root->rightChild));
}

void traverseLevelOrder(Node* root){
    int h = height(root);
    for(int i=0; i<=h; i++){
        printNodeAtDistance(root, i);
    }
    cout<<endl;
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

    cout << "Level Order Traversal (BFS): ";
    traverseLevelOrder(root);

    return 0;

}