// Reverse an array in place using two pointers (begin and end) and pointers.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int len_of_arr = sizeof(arr)/sizeof(arr[0]);

    int* start = arr;
    int* end = arr+ len_of_arr-1;



    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout<<"Reversed array"<<endl;
    for(int i=0; i<len_of_arr; i++){
        cout<<arr[i]<<" ";
    }


}