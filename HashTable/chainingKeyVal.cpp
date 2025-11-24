#include<iostream>
#include<list>
#include<string>
using namespace std;

class HashTable{
    private:
        int bucket;
        list<pair<int, string>> *table;
    public:
        HashTable(int size){
            bucket = size;
            table = new list<pair<int, string>>[bucket];
        }
    int hashFun(int key){
        return key%bucket;
    }

    void insertItem(int key, string value){
        int index = hashFun(key);

        for(auto &p: table[index]){
            if(p.first == key){
                p.second = value;
                cout<<"Key "<<key<<" updated with the value: "<<value<<endl;
                return;
            }
        }
        table[index].push_back({key, value});
    }
    bool searchingItem(int key){
        int index = hashFun(key);
        for(auto &p: table[index]){
            if(p.first == key){
                cout<<" Found, Key: "<<key<<" Value: "<<p.second<<endl;
                return true;
            }
        }
        cout<<"Not Found.\n";
        return false;
    }
    void deleteItem(int key) {
        int index = hashFun(key);


        for (auto it = table[index].begin(); it != table[index].end(); it++) {
            if (it->first == key) {
                table[index].erase(it);
                cout << "Key " << key << " deleted successfully.\n";
                return;
            }
        }
        cout << "Key not found!\n";
    }


    void display(){
        for(int i=0; i<bucket; i++){
            cout<<i;
            for(auto &p: table[i]){
                cout << " -> (" << p.first << ", " << p.second << ")";
                cout << endl;
            }
        }
    }

};


int main(){
    HashTable h(7);
    h.insertItem(11, "Apple");
    h.insertItem(12, "Banana");
    h.insertItem(13, "Mango");
    h.insertItem(14, "Orange");
    h.insertItem(15, "Grapes");
    h.insertItem(16, "Kiwi");
    h.insertItem(17, "papaya");
    h.insertItem(24, "Pineapple");
    h.insertItem(19, "Guava");

    cout<<"Initial hashTable: \n";
    h.display();

    h.searchingItem(14);

    cout<<"After deleted item\n";
    h.deleteItem(24);
    h.display();
    return 0;
    
}