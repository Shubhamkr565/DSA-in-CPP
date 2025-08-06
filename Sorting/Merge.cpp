#include<iostream>
using namespace std;

int main(){
    int arr1[] = {10,20,43,23,1,5,12};
    int arr2[] = {43,12,45,56,34};

    int l1 = sizeof(arr1)/sizeof(arr1[0]);
    int l2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[l1+l2];
    // cout<<sizeof(arr3)/sizeof(arr3[0]);
    cout<<endl;
    int k = 0;
    for(int i=0; i<l1; i++){
        arr3[k] = arr1[i];
        k++;
    }
    for(int j=0; j<l2; j++){
        arr3[k] = arr2[j];
        k++;
    }
    for(int i=0; i<l1+l2; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    // using bubble sort
    int l3 = sizeof(arr3)/sizeof(arr3[0]);
    for(int i=0; i<l3-1; i++){
        for(int j=0; j<=l3-i-2; j++){
            if(arr3[j]>arr3[j+1]){
                int temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }
    // using selection sort

    for(int i=0; i<l3; i++){
        int min_index = i;
        for(int j=i+1; j<l3-i; j++){
            if(arr3[j] < arr3[min_index]){
                min_index = j;
            }
        }
        int temp = arr3[i];
        arr3[i] = arr3[min_index];
        arr3[min_index]= temp;
    }


    for(int i=0; i<l3; i++){
        cout<<arr3[i]<<" ";
    }
    
}