#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 2, 7, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while(left < right){
        int height = min(arr[left], arr[right]);
        int width = right - left;
        int area = height * width;

        maxArea = max(maxArea, area);

        // Move the pointer pointing to the shorter line
        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }

    cout << "Maximum area (container with most water): " << maxArea << endl;

    return 0;
}
