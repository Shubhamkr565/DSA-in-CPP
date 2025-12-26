// Given a square matrix of order n, verify whether it is an Upper Triangular Matrix.
// An Upper Triangular Matrix satisfies:
// All elements below the main diagonal must be 0.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter size of Square Matrix: ";
    int n;
    cin>>n;

    cout<<"Enter Matrix: "<<endl;
    int matrix[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix data: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    bool isUpper = true;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(matrix[i][j] != 0){
                isUpper = false;
                break;
            }
        }
    }
    if(isUpper){
        cout<<"Upper Triangular Matrix:(✅) "<<endl;
    }else{
        cout<<"Not Upper Triangular Matrix:(❌) "<<endl;
    }
}