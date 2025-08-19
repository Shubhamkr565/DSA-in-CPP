#include<iostream>
#include<vector>
#include<algorithm>  // for sort()
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }

    void insertAtLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to sort LinkedList using vector
    void sortList(){
        // step 1: copy LL into vector
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }

        // step 2: sort the array --> O(n log n)
        sort(arr.begin(), arr.end());

        // step 3: copy back into LinkedList
        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->data = arr[i++];
            temp = temp->next;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    LinkedList l1;
    l1.insertAtLast(40);
    l1.insertAtLast(10);
    l1.insertAtLast(50);
    l1.insertAtLast(30);
    l1.insertAtLast(20);

    cout<<"Before Sorting:\n";
    l1.display();

    l1.sortList();

    cout<<"After Sorting:\n";
    l1.display();

    return 0;
}
