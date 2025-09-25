#include <iostream>
#define MAX 10
using namespace std;

class CircularDeque {
    int front, rear, size;
    int* arr;

public:
    CircularDeque() {
        front = 0;
        rear = -1;
        size = 0;
        arr = new int[MAX];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX;
    }

    void insertRear(int data) {
        if (isFull()) {
            cout << "Deque is Full\n";
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = data;
        size++;
    }

    void insertFront(int data) {
        if (isFull()) {
            cout << "Deque is Full\n";
            return;
        }
        front = (front - 1 + MAX) % MAX;
        arr[front] = data;
        size++;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }
        int deleted = arr[rear];
        rear = (rear - 1 + MAX) % MAX;
        size--;
        cout << "Removed from Rear: " << deleted << endl;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }
        int deleted = arr[front];
        front = (front + 1) % MAX;
        size--;
        cout << "Removed from Front: " << deleted << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }
        cout << "Deque elements: ";
        for (int i = 0; i < size; i++) {
            int index = (front + i) % MAX;
            cout << arr[index] << " ";
        }
        cout << endl;
    }

    void peekFront() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }
        cout << "Front Element: " << arr[front] << endl;
    }

    void peekRear() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
        }
        cout << "Rear Element: " << arr[rear] << endl;
    }
};

int main() {
    CircularDeque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertRear(30);
    dq.insertRear(40);

    dq.insertFront(5);
    dq.insertRear(50);

    dq.peekFront();
    dq.peekRear();
    dq.display();

    dq.deleteFront();
    dq.deleteRear();
    dq.display();

    return 0;
}
