// Step 1: Sirf integers, no collision (sabse basic)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    const int M = 10; //table size;
    vector<int> table(M, INT_MIN); // INT_MIN = empty;

    auto hashFun = [&](int key){
        return key%M;
    };

    vector<int> keys = {5,17,23};
    for(int k: keys){
        int index = hashFun(k);
        table[index] = k; // direct place (NO Collision yet)
    }

    // searching
    int q = 5;
    int index = hashFun(q);
    if(table[index] == q){
        cout<<"Found "<<q<<" at index: "<<index<<endl;
    }else{
        cout<<"Not Found\n";
    }

}