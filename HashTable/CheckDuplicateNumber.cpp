// Problem 1: Check Duplicate Number

// Input: A list of numbers
// Task: Tell if there is any duplicate present.

// 👉 Use unordered_set to check duplicates fast.


#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> Numbers = {10,20,30,40,50,60};
    unordered_set<int> num;

    bool duplicate = false;

    for(int n: Numbers){
        if(num.find(n) != num.end()){
            duplicate = true;
            break;
        }
        num.insert(n);
    }

    if(duplicate){
        cout<<"Duplicate Found."<<endl;
    }else{
        cout<<"Not Found."<<endl;
    }
    return 0;
}