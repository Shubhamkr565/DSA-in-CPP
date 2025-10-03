#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree{
    public:
    Node* root;

    Tree(){
        root = NULL;
    }
};

int main(){
    Tree t;
    t.root = new Node(1);
    t.root->left = new Node(2);
    t.root->right = new Node(3);
    t.root->left->left = new Node(4);
    t.root->right->right = new Node(5);


    // Display value;
    cout<<"Root: "<<t.root->value<<endl;
    cout<<"Root->left: "<<t.root->left->value<<endl;
    cout<<"Root->right: "<<t.root->right->value<<endl;

    cout<<"Root->left->left: "<<t.root->left->left->value<<endl;
    cout<<"Root->right->right: "<<t.root->right->right->value<<endl;

    return 0;
}