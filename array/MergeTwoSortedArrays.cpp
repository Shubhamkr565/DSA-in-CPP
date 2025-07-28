// Write a program in  Merge Two Sorted Arrays

#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7,9,11,22};
    int arr2[] = {2,4,6,8,10,12,16,17}; 

    int l1 = sizeof(arr1)/sizeof(arr1[0]);
     
    int l2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[l1+l2];
    int i=0, j=0, k=0;

    while (i<l1 and j<l2)
    {
        if (arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i<l1) arr3[k++] = arr1[i++];
    while (j<l2)arr3[k++] = arr2[j++];
    
    for(int m = 0;m<l1+l2; m++){
        cout<<arr3[m]<<" ";
    }
    return 0;
    
    

}