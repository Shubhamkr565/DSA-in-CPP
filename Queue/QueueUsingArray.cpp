#include<iostream>
#define MAX 10
using namespace std;


class LinearQueue{
    int front, rear, size;
    int* arr;

    public:
        LinearQueue(){
            size = 0;
            arr = new int[MAX];
            front = 0;
            rear = -1;
        }
    bool isEmpty(){
        return size == 0;
        // return front > rear
    }
    bool isFull(){
        return size == MAX;
        // return rear == MAX-1;
    }
    void enqueue(int item){
        if(isFull()){
            cout<<"Queue is Full \n";
            return;
        }
        arr[++rear] = item;
        size++;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty \n";
            return -1;
        }
        int dequeueItem = arr[front];
        cout<<"Removed: "<<dequeueItem<<endl;
        front++;
        size--;
        return dequeueItem;
    }
    int getSize(){
        return size;
    }
    int peelFront(){
        if(isEmpty()){
            cout<<"Queue is Empty: \n";
            return -1;
        }
        return arr[front];
    }
    int peekRear(){
        if(isEmpty()){
            cout<<"Queue is Empty: \n";
            return -1;
        }
        return arr[rear];
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty: \n";
            return;
        }
        cout<<"Queue: ";
        for(int i=front; i<= rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    LinearQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Total Element present: "<<q.getSize()<<endl;
    cout<<"Front Element: "<<q.peelFront()<<endl;
    cout<<"Rear Element: "<<q.peekRear()<<endl;

    q.dequeue();
    q.dequeue();

    cout<<"Total Element present: "<<q.getSize()<<endl;
    cout<<"Front Element: "<<q.peelFront()<<endl;
    cout<<"Rear Element: "<<q.peekRear()<<endl;

    q.display();
    return 0;
    
    
}