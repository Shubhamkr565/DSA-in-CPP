// Partition Array Into Even and Odd

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {12,17,70,22,65,21,90};
    int left = 0;
    int right = arr.size()-1;

    while (left<right)
    {
        while (arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (arr[right] % 2 != 0 && left < right)
        {
            right--;
        }
        swap(arr[left], arr[right]);
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}