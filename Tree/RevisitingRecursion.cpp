// Revisiting Recursion
// Recursion is a powerful programming technique used to implement repetition, similar to loops, but it works differently.

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

// function to calculate factorial iteratively

// int factorial(int n){
//     int fact = 1;
//     for(int i=n; i>1; i--){
//         fact *= i;
//     }
//     return fact;
// }

int factorial(int n) {
    if (n <= 1) // Base case: 0! = 1! = 1
        return 1;
    return n * factorial(n - 1); // Recursive call
}
bool isEmpty(Node* root){
    return root == NULL;
}

// preOrder traversal: Root->left->right
void PreOrder(Node* root){
    if(isEmpty(root)) return;

    cout<<"Node: "<<root->data<<" ,factorial: "<<factorial(root->data)<<endl;
    PreOrder(root->leftChild);
    PreOrder(root->rightChild);
}



int main(){

    Node* root = new Node(1);
    root->leftChild = new Node(2);
    root->rightChild = new Node(3);
    root->leftChild->leftChild = new Node(4);
    root->rightChild->rightChild = new Node(5);



    cout<<"Factorial of each node in PreOrder Traversal : ";
    PreOrder(root);
    return 0;
}