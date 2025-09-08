#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void preorder(Node* root){
    if(root == nullptr)return;
    
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == nullptr)return;

    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root == nullptr)return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        cout << current->data << " ";
        q.pop();
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
}


int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);


    cout<<"Preorder: ";
    preorder(root);
    
    cout<<"\nInorder: ";
    inorder(root);

    cout<<"\nPostorder: ";
    postorder(root);

    cout<<"\nlevelOrder ";
    levelOrder(root);
    cout<<endl;
    return 0;
}