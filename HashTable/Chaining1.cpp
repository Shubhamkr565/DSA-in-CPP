#include<iostream>
#include<list>
using namespace std;

class HashTable{
    private:
        int bucket;
        list<int> *table;
    public:
        HashTable(int size){
            bucket = size;
            table = new list<int>[bucket]; 
        }
    // hashFun;
    int hashFun(int key){
        return key%bucket;
    }
    void insertItem(int key){
        int index = hashFun(key);
        table[index].push_back(key);
    }

    // display
    void display(){
        for(int i=0; i<bucket; i++){
            cout<<i;
            for(auto x: table[i]){
                cout<<" -> "<<x;
            }
            cout<<endl;
        }
    }
};


int main(){
    int keys[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(keys) / sizeof(keys[0]);

    HashTable h(7);
    for(int i=0; i<n; i++){
        h.insertItem(keys[i]);
    }
    cout<<"Initial Hash Table: "<<endl;
    h.display();
}