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

        bool searchingItem(int key){
            int index = hashFun(key);
            for(auto x: table[index]){
                if(x == key){
                    return true;
                }
            }
            return false;
            
        }

        void deleteItem(int key){
            if(searchingItem(key)){
                int index = hashFun(key);
                table[index].remove(key);
                cout<<"Key "<<key<<" delete successfully.\n";
            }else{
                cout<<"key not found.\n";
            }
        }

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
    int keys[] = {10,20,30,40,50,60};
    int n = sizeof(keys)/sizeof(keys[0]);
    
    HashTable h(6);
    for(int i=0; i<n; i++){
        h.insertItem(keys[i]);
    }
    cout<<"Initial Hash Table: "<<endl;
    h.display();

    cout<<"searchingItem 50: "<<endl;
    if(h.searchingItem(50)){
        cout<<"Key found!\n";
    }else{
        cout<<"Key Not Found\n";
    }

    h.deleteItem(40);
    h.display();
}