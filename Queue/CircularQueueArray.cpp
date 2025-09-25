#include<iostream>
#define MAX 5
using namespace std;

class CircularQueue{
    int front, rear, size;
    int* arr;

    public:
    CircularQueue(){
        front = 0;
        rear = -1;
        size = 0;
        arr = new int[MAX];
    }

    bool isEmpty(){
        return size == 0;
    }
    bool isFull(){
        return size == MAX;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"Queue is Full: \n";
            return;
        }
        rear = (rear+1)%MAX;
        arr[rear] = data;
        size++;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty: \n";
            return;
        }
        int removeData = arr[front];
        cout<<"RemoveData: "<<removeData<<" \n";
        front = (front+1)%MAX;
        size--;
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty: \n";
            return;
        }
        cout<<"Queue Data: \n";
        int count  = size;
        int i = front;
        while(count--){
            cout<<arr[i]<<" ";
            i = (i+1)%MAX;
        }
        cout<<endl; 
    }
};



int main(){
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);

    cq.dequeue();

    cq.enqueue(60);

    cq.display();
    
}