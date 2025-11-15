// Collision Handling - Chaining (Linked List / Vector)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int M = 10;
    vector<int> table(M, INT_MIN);

    // auto hashFun(int key){
    //     return key%M;
    // };
    auto hashFun = [&](int key){
        return key%M;
    };

    vector<int> keys = {5,23,67,89};
    for(int K: keys){
        int index = hashFun(K);
        table[index] = K;
    }

    int q = 23;
    int index = hashFun(q);
    if(table[index] == q){
        cout<<"Found "<<q<<" at index "<<index<<endl;
    }else{
        cout<<"Not Found."<<endl;
    }
}
