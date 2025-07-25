// Swap two numbers using pointers and functions.
#include<iostream>
using namespace std;

// Function to swap using pointers
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10;
    int b = 20;

    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    swap(&a, &b);

    cout << "After Swap: a = " << a << ", b = " << b << endl;

    return 0;
}
