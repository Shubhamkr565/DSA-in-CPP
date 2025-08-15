
#include<iostream>
#include<vector>
using namespace std;

void Bullbe_Sort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}



void selection_Sort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        int min_index = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(arr[i], arr[min_index]);
        }
    }
}


void Insertion_sort(vector<int> &arr){
    for(int i=0; i<arr.size(); i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void merge(vector<int> &arr, int left, int mid, int right){
    vector<int> temp;
    int i = left; 
    int j = mid+1;

    while(i<=mid && j<=right){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=left; k<=right; k++){
        arr[k] = temp[k-left];
    }
}

void Merge_sort(vector<int> &arr, int left, int right){
    if(left<right){
        int mid = left+(right-left)/2;
        Merge_sort(arr, left,mid);
        Merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int partition(vector<int> & arr, int start, int end){
    int pivot = arr[start];
    int  i= start+1;

    for(int j= start+1; j<=end; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[start], arr[i-1]);
    return i-1;
}

void quick_sort(vector<int> &arr, int start, int end){
    if(start<end){
        int pivot_Index = partition(arr, start, end);
        quick_sort(arr, start, pivot_Index-1);
        quick_sort(arr, pivot_Index+1, end); 
    }
}




int main(){
    vector<int> arr = {5,3,6,2,1,4};

    cout<<"Original Array: ";
    for(int num : arr)cout<<num<<" ";
    cout<<endl;
    Bullbe_Sort(arr);
    cout<<"Using Bubble Sort (Sorted Array): "<<endl;
    for(int num : arr)cout<<num<<" ";
    cout<<endl;


    selection_Sort(arr);
    cout<<"Using selection_Sort (Sorted Array): "<<endl;
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    Insertion_sort(arr);
    cout<<"Using Insertion_sort (Sorted Array): "<<endl;
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    Merge_sort(arr, 0, arr.size()-1);
    cout<<"Using Merge_sort (Sorted Array): "<<endl;
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    quick_sort(arr, 0 ,arr.size()-1);
    cout<<"Using Quick_sort (Sorted Array): "<<endl;
    for(int num : arr)cout<<num<<" ";
    cout<<endl;

    return 0;
}