#include<iostream>
using namespace std;


class Queue {
private:
   int* arr;  // dynamic array to store queue elements
   int front, rear, size, capacity;


public:
   // constructor
   Queue(int cap) {
       capacity = cap;
       arr = new int[capacity];
       front = 0;
       rear = -1;
       size = 0;
   }


   // enqueue
   void enqueue(int value) {
       if (size == capacity) {
           cout << "Queue Overflow\n";
           return;
       }
       rear = (rear + 1) % capacity; // circular increment
       arr[rear] = value;
       size++;
   }


   // dequeue
   void dequeue() {
       if (size == 0) {
           cout << "Queue Underflow\n";
           return;
       }
       cout << "Dequeued: " << arr[front] << endl;
       front = (front + 1) % capacity; // circular increment
       size--;
   }


   // peek
   int peek() {
       if (size == 0) {
           cout << "Queue is empty\n";
           return -1;
       }
       return arr[front];
   }


   // display
   void display() {
       if (size == 0) {
           cout << "Queue is empty\n";
           return;
       }
       cout << "Queue: ";
       for (int i = 0; i < size; i++) {
           cout << arr[(front + i) % capacity] << " -> ";
       }
       cout << "NULL\n";
   }


   // get size
   int getSize() {
       return size;
   }
};




int main(){
   Queue q1(5);


   q1.enqueue(10);
   q1.enqueue(20);
   q1.enqueue(30);
   q1.enqueue(40);
   q1.enqueue(50);


   q1.dequeue();
   q1.display();
  
}
