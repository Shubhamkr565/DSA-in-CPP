// Write a program to input an integer and print its value and address using a pointer.

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;
    
    return 0;
}
