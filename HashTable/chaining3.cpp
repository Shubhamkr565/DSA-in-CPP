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
    int hashFun(int key){
        return key%bucket;
    }

    void insertItem(int key){
        int index = hashFun(key);
        table[index].push_back(key);
    }
    bool searching(int key){
        int index = hashFun(key);

        bool found = false;
        for(auto x: table[index]){
            if(x == key){
                found = true;
                break;
            }
        }
        if(found){
            cout<<"Key: "<<key<<" Found."<<endl;
        }else{
             cout<<"Key: "<<key<<" Not Found."<<endl;
        }
    }
    void deleteItem(int key){
        if(searching(key)){
            int index = hashFun(key);
            table[index].remove(key);
            cout<<"Key: "<<key<<" deleted Successfully..."<<endl;
        }else{
            cout<<"Key Not Found."<<endl;
        }
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
    int keys[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(keys)/sizeof(keys[0]);
    HashTable h(5);

    for(int i=0; i<n; i++){
        h.insertItem(keys[i]);
    }
    cout<<"Initial Hash table: "<<endl;
    h.display();

    h.searching(12);

    h.deleteItem(4);
    h.display();
    return 0;
}