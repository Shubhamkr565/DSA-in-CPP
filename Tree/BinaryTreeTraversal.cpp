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

class tree{
    public:
        Node* root;

    tree(){
        root = NULL;
    }
};

Node* createTree(){
    int x;
    cout<<"Enter tree data: if -1 == NULL: ";
    cin>>x;

    if(x == -1)return NULL;
    Node* root = new Node(x);
    root->left = createTree();
    root->right = createTree();

    return root;
}

void pre_order(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(Node* root){
    if(root==NULL)return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

void in_order(Node* root){
    if(root==NULL)return;
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
    
}



int main(){
    tree t;
    cout<<"Creating Tree with the help of User:\n";
    t.root = createTree();
    cout<<endl;
    cout<<"Pre_Order Node Traversal: ";
    pre_order(t.root);

    cout<<endl;
    cout<<"Post_Order Node Traversal: ";
    post_order(t.root);

    cout<<endl;
    cout<<"In_Order Node Traversal: ";
    in_order(t.root);
}