#include<iostream>
using namespace std;

class HashTable{
    private:
        int size;
        int *table;
    public:
        HashTable(int s){
            size = s;
            table = new int[size];

            for(int i=0; i<size; i++){
                table[i] = -1;
            }
        }
    
    int hashFun(int key){
        return key%size;
    }
    void insertItem(int key){
        int index = hashFun(key);
        int start = index;

        while (table[index] != -1)
        {
            index = (index + 1)% size;
            if(index == start){
                cout<<"Hash Table is Full. Cannot insert "<<key<<endl;
                return;
            }
        }
        
        table[index] = key;
    }

    void deleteItem(int key){
    int index = hashFun(key);
    int start = index;

    while (table[index] != -1) {  // stop only when empty slot reached
        if (table[index] == key) {
            table[index] = -2;  // special marker for deleted slot
            cout << "Key " << key << " deleted successfully.\n";
            return;
        }

        index = (index + 1) % size;

        if (index == start) {
            break;   // full loop completed
        }
    }

    cout << "Key " << key << " not found.\n";
}
    

    void display(){
        for(int i=0; i<size; i++){
            cout<<i<<" -> "<<table[i]<<endl;
        }
    }
};

int main(){
    HashTable h(3);

    h.insertItem(23);
    h.insertItem(22);
    h.insertItem(21);
    h.insertItem(45);
    h.display();

    h.deleteItem(21);
    
    h.display();

    return 0;
    
}