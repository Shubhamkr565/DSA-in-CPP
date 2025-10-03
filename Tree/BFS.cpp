//  Breadth-First Traversal (BFS)
// Also called Level Order Traversal. Idea: Visit all nodes at the same level first, then move to the next level.


#include<iostream>
#include<queue>
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

class Tree{
    public:
    Node* root;

    Tree(){
        root = NULL;
    }
};

void levelOrderTraversal(Node* root){
    if(root == NULL)return;

    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        cout<<current->data<<" ";
        if(current->leftChild != NULL){
            q.push(current->leftChild);
        }
        if(current->rightChild != NULL){
            q.push(current->rightChild);
        }
    }
}


int main(){
    Tree t1;

    t1.root = new Node(1);
    t1.root->leftChild = new Node(2);
    t1.root->rightChild = new Node(3);
    t1.root->leftChild->leftChild = new Node(4);
    t1.root->rightChild->rightChild = new Node(5);

    cout<<"Level Order Traversal (BFS) "<<endl;
    levelOrderTraversal(t1.root);

    return 0;
}


