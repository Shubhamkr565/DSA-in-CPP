#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout<<"Enter Family Member: ";
    int N;
    cin >> N;

    vector<int> heights(N);
    cout<<"Enter according to family height: "<<endl;
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    cout<<"Enter value of K: ";

    int k;
    cin >> k;

    for(int i=0; i<N; i = i+k){
        int end = min(i+k-1, N-1);
        reverse(heights.begin()+i, heights.begin() + end + 1);
    }
    for(int x: heights){
        cout<<x<<" ";
    }

    return 0;
}

