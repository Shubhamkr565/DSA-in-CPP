#include<iostream>
#include<queue>
#include<vector>
#include<climits> // for INT_MIN
using namespace std;

class Node {
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int data) {
        this->data = data;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

// Size of Nodes
int size(Node* root) {
    if (root == NULL) return 0;
    return 1 + size(root->leftChild) + size(root->rightChild);
}

// Sum of Nodes
int sum(Node* root) {
    if (root == NULL) return 0;
    return root->data + sum(root->leftChild) + sum(root->rightChild);
}

// Count Leaf Nodes
int countLeaves(Node* root) {
    if (root == NULL) return 0;
    if (root->leftChild == NULL && root->rightChild == NULL) return 1;
    return countLeaves(root->leftChild) + countLeaves(root->rightChild);
}

// Count Non-Leaf Nodes
int countNonLeaves(Node* root) {
    if (root == NULL) return 0;
    if (root->leftChild == NULL && root->rightChild == NULL) return 0;
    return 1 + countNonLeaves(root->leftChild) + countNonLeaves(root->rightChild);
}

// Largest Value at Each Level
vector<int> largestValueEachLevel(Node* root) {
    vector<int> result;
    if (root == NULL) return result;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size(); // nodes at current level
        int maxVal = INT_MIN;

        for (int i = 0; i < n; i++) {
            Node* current = q.front();
            q.pop();
            maxVal = max(maxVal, current->data);

            if (current->leftChild) q.push(current->leftChild);
            if (current->rightChild) q.push(current->rightChild);
        }

        result.push_back(maxVal);
    }

    return result;
}

// Mirror of a Binary Tree
void Mirror(Node* root){
    if(root == NULL)return;
    swap(root->leftChild, root->rightChild);
    Mirror(root->leftChild);
    Mirror(root->rightChild);
}

// Finding Minimum and Maximum in a Binary Tree
int findMin(Node* root) {
    if (root == NULL) return INT_MAX;
    int leftMin = findMin(root->leftChild);
    int rightMin = findMin(root->rightChild);
    return min(root->data, min(leftMin, rightMin));
}

int findMax(Node* root) {
    if (root == NULL) return INT_MIN;
    int leftMax = findMax(root->leftChild);
    int rightMax = findMax(root->rightChild);
    return max(root->data, max(leftMax, rightMax));
}

// Check if Two Nodes Are Siblings

bool areSiblings(Node* root, int val1, int val2) {
    if (root == NULL) return false;

    if (root->leftChild && root->rightChild) {
        if ((root->leftChild->data == val1 && root->rightChild->data == val2) ||
            (root->leftChild->data == val2 && root->rightChild->data == val1)) {
            return true;
        }
    }

    return areSiblings(root->leftChild, val1, val2) ||
           areSiblings(root->rightChild, val1, val2);
}




int main() {
    Node* root = new Node(1);
    root->leftChild = new Node(2);
    root->rightChild = new Node(3);
    root->leftChild->leftChild = new Node(4);
    root->rightChild->rightChild = new Node(5);

    cout << "\nSize of All Tree Nodes: " << size(root);
    cout << "\nSum of All Tree Nodes: " << sum(root);
    cout << "\nCount of Leaf Nodes: " << countLeaves(root);
    cout << "\nCount of Non-Leaf Nodes: " << countNonLeaves(root);

    cout << "\nLargest Value at Each Level: ";
    vector<int> result = largestValueEachLevel(root);
    for (int val : result) {
        cout << val << " ";
    }
    // cout<<"\nMirror of a Binary Tree: "<<Mirror(root);

    cout << endl;

    cout<<"Find the min value in the root: "<<findMin(root);
    cout<<"\nFind the max value in the root: "<<findMax(root);


    cout << "\nAre 4 and 5 siblings? " << (areSiblings(root, 4, 5) ? "Yes" : "No");
cout << "\nAre 2 and 3 siblings? " << (areSiblings(root, 2, 3) ? "Yes" : "No");

    return 0;
}
