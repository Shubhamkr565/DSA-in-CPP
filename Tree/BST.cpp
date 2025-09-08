#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;    
    }
};


Node* insert(Node* root, int val){
    if(root == NULL) return new Node(val);

    if(val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;

}

bool search(Node* root, int key){
    if(root == NULL)return false;

    if(root->data  == key) return true;
    if(key < root->data)return search(root->left, key);
    return search(root->right, key);

}

void inorder(Node* root){
    if(root == NULL)return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 4);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 9);
    root = insert(root, 12);

    cout<<"Inorder Traversal Sorting:\n";
    inorder(root);
    cout<<endl;
}