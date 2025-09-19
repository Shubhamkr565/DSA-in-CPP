// A Binary Search Tree is a binary tree where:
// Left subtree nodes have values less than the parent.
// Right subtree nodes have values greater than the parent.
// No duplicate nodes.


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insert(Node* root, int val){
    if(root == NULL)return root = new Node(val);

    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

void InOrder(Node* root){
    if(root == NULL)return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOrder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root){
    if(root == NULL)return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;

    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,2);
    root = insert(root,8);
    root = insert(root,12);
    root = insert(root,20);


    cout<<"InOrder Traversal Sorting: ";

    InOrder(root);
    cout<<endl;
    
    cout<<"PreOrder Traversal Sorting: ";
    PreOrder(root);
    cout<<endl;

    cout<<"PostOrder Traversal Sorting ";
    PostOrder(root);
    cout<<endl;
    

    //     10
    //    /  \
    //   5    15
    //  / \   / \
    // 2   8 12 20



}