#include<iostream>
#include<list>
using namespace std;


class HashTable{
    private:
        int bucket;
        list<int>*table;
    public:
        HashTable(int size){
            bucket = size;
            table = new list<int>[bucket];
        }
    
    int hashFun(int key){
        return key%bucket;
    }

    void insertItem(int key){
        int index = hashFun(key);
        table[index].push_back(key);
    }

    void deleteItem(int key){
        int index = hashFun(key);
        table[index].remove(key);
    }
    
    bool searchingItem(int key){
        int index = hashFun(key);

        for(auto x: table[index]){
            if(x == key){
                return true;
            }
        }
        return false;
    }


    void display(){
        for(int i=0; i<bucket; i++){
            cout<<i;
            for(int x: table[i]){
                cout<<" -> "<<x;
            }
            cout<<endl;
        }
    }
};


int main(){
    int keys[] = {10,23,45,6,4,42,653};
    int n = sizeof(keys)/ sizeof(keys[0]);

    HashTable h(5);
    cout<<"Initial items: "<<endl;
    for(int i=0; i<n; i++){
        h.insertItem(keys[i]);
    }

    h.display();

    cout<<"After Deleted Item: "<<endl;
    h.deleteItem(653);
    h.display();

    cout<<"Searching Item: "<<endl;
    if(h.searchingItem(23)){
        cout<<"Key Found.\n";
    }else{
        cout<<"Key Not Found.\n";
    }
    return 0;

}