#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;
        Node* child;

        Node(int _val){
            val = _val;
            prev = NULL;
            next = NULL;
            child = NULL;
        }
};

class Solution{
    public:
        Node* flatten(Node* head){
            if(head==NULL){
                return head;
            }
            Node* curr = head;
            while(curr != NULL){
                if(curr->child != NULL){
                    // store Next Ndoe
                    Node* temp = curr->next;
                    curr->next = flatten(curr->child);
                    curr->next->prev = curr;
                    curr->child = NULL;

                    // find tail
                    while(curr->next != NULL){
                        curr = curr->next;
                    }
                    // connect tail/ attach tail with the store next Node
                    if(temp != NULL){
                        curr->next = temp;
                        temp->prev = curr;
                    }
                }
                curr = curr->next; //move to next node
            }
            return head;
        }
};

void printList(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->val<<" <=> ";
        curr = curr->next;
    }
    cout<<"NULL\n";
}

int main(){
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;

    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    head->next->next->child = new Node(5);
    head->next->next->child->next = new Node(6);
    head->next->next->child->next->prev = head->next->next->child;

    Solution sol;
    Node* flatHead  = sol.flatten(head);

    cout<<"Flatten List: ";
    printList(flatHead);
    return 0;
}