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

int getHeight(Node* root){
    if(root == NULL)return 0;
    return 1+ max(getHeight(root->left), getHeight(root->right));
}

int getBalance(Node* root){
    if(root == NULL) return 0;
    return getHeight(root->left) - getHeight(root->right);
}

Node* rightRotation(Node* y){
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;
    return x;
}

Node* leftRotation(Node* x){
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right= T2;

    return y;
}

Node* insertAVL(Node* root, int key){
    if(root == NULL){
        cout << "Creating new node: " << key << endl;
        return new Node(key);
    }
    if(key < root->value){
        root->left = insertAVL(root->left, key);
    }else if(key > root->value){
        root->right = insertAVL(root->right, key);
    }else {
        return root;
    }

    int balance = getBalance(root);
    cout << "Node " << root->value << " -> Balance = " << balance << endl;

    if(balance > 1 && root->left != NULL && key < root->left->value){
        return rightRotation(root);
    }
    if(balance < -1 && root->right != NULL && key > root->right->value){
        return leftRotation(root);
    }
    if(balance > 1 && root->left != NULL && key > root->left->value){
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }
    if(balance < -1 && root->right != NULL && key < root->right->value){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    return root;
}

void inorderAVL(Node* root){
    if(root == NULL) return;

    inorderAVL(root->left);
    cout<<root->value<<" ";
    inorderAVL(root->right);
}

int main(){
    Node* root = NULL;

    root = insertAVL(root, 10);
    root = insertAVL(root, 50);
    root = insertAVL(root, 30);
    root = insertAVL(root, 20);
    root = insertAVL(root, 23);
    root = insertAVL(root, 78);
    root = insertAVL(root, 210);

    cout<<"\nInorderAVL: ........\n";
    inorderAVL(root);
    cout<<endl;
}
