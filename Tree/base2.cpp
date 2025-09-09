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
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

bool search(Node* root, int key){
    if(root == NULL) return false;

    if(root->data == key)return true;
    if(key < root->data)return search(root->left, key);
    return search(root->right, key);
}

void inOrder(Node* root){
    if(root == NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void PreOrder(Node* root){
    if(root == NULL)return ;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
    
}
void PostOrder(Node* root){
    if(root == NULL)return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main(){

    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 6);
    root = insert(root, 9);
    root = insert(root, 11);
    root = insert(root, 20);

    cout<<"InOrder Traversal Sorting: \n";
    inOrder(root);
    cout<<endl;

    cout<<"PreOrder Traversal Sorting: \n";
    PreOrder(root);
    cout<<endl;

    cout<<"PostOrder Traversal Sorting: \n";
    PostOrder(root);
    cout<<endl;

    //      10
    //    /  \
    //   8    12
    //  / \   / \
    // 6   9 11 20
   
    
}