#include<iostream>
#include<queue>
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

class Tree{
    public:
        Node* root;

    Tree(){
        root = NULL;
    }

};

bool find(Node* root, int val){
    if(root==NULL){
        return false;
    }
    if(root->data == val){
        return true;
    }
    return find(root->left,val) || find(root->right,val);
}

// Breadth-First Traversal (BFS)

void bfs(Node* root){
    if(root == NULL)return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    cout<<endl;
}

// Depth-First Traversal (DFS)

// Pre-order Traversal (Root first)

void pre_order(Node* root){
    if(root == NULL)return;

    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}

// Post-order Traversal (Root last)

void post_order(Node* root){
    if(root == NULL)return;

    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

// In-order Traversal (Root in middle)
void in_order(Node* root){
    if(root == NULL)return;

    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}


int main(){

   Tree t;
   t.root = new Node(1);
   t.root->left = new Node(2);
   t.root->right = new Node(3);
   t.root->left->left = new Node(4);
   t.root->right->right = new Node(5);

   cout<<"Search data: \n";
   int val = 4;
   
   if(find(t.root, val)){
    cout<<val<<" found in data.\n";
   }else{
    cout<<val<<" Not found in data.\n";
   }


   cout<<"BSF: Level order traversal: ";
   bfs(t.root);

   cout<<"pre_order: ";
   pre_order(t.root);
   cout<<endl;
   cout<<"post_order: ";
   post_order(t.root);

   cout<<endl;
   cout<<"in_order: ";
   in_order(t.root);

   cout<<"\nDisplay Root. \n";
   cout<<"Root->data: " <<t.root->data<<endl;
   cout<<"Root->left->data: "<<t.root->left->data<<endl;
   cout<<"Root->right->data: "<<t.root->right->data<<endl;
   cout<<"Root->left->left->data: "<<t.root->left->left->data<<endl;
   cout<<"Root->right->right->data: "<<t.root->right->right->data<<endl;
   
   return 0;

}


    //     1
    //    / \
    //   2   3
    //  /     \
    // 4       5
