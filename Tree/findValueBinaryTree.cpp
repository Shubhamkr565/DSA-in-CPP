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
    bool find(Node* root,int value){
        if(root == NULL){
            return false;
        }
        if(root->value == value){
            return true;
        }
        return find(root->left, value) || find(root->right,value);
    }
    
};


int main(){
    Tree t;

    t.root = new Node(1);

    t.root->left = new Node(2);
    t.root->right = new Node(3);
    t.root->left->left = new Node(4);
    t.root->right->right = new Node(5);

    t.root->left->left->left = new Node(40);
    t.root->right->right->right = new Node(50);

    // searching value;

    int val= 50;

    if(t.find(t.root,val)){
    cout<<val<<" Found in the tree."<<endl;
    }else{
        cout<<val<<" Not found in the tree."<<endl;
    }
    return 0;
}