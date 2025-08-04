// Merge Two Sorted Array

#include<iostream>
using namespace std;

int main(){
    int arr1[] = {2,4,6,8,10};
    int arr2[] = {1,3,5,7,9};
    int l1 = sizeof(arr1)/sizeof(arr1[0]);
    int l2 = sizeof(arr2)/sizeof(arr2[0]);
    int merge[l1+l2];
    int i=0, j=0, k=0;
    while(i<l1 && j<l2){
        if(arr1[i] < arr2[j]){
            merge[k++] = arr1[i++];
        }else{
            merge[k++] = arr2[j++];
        }
    } 

    while (i<l1)
    {
        merge[k++] = arr1[i++];
    }
    while (j<l2)
    {
        merge[k++] = arr2[j++];
    }
    
    cout<<"Merge array: "<<endl;
    for(int i=0; i<l1+l2; i++){
        cout<<merge[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}