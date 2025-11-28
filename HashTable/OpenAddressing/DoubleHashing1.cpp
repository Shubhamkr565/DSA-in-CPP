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

        int hash1(int key){
            return key%size;
        }

        int hash2(int key){
            return 7 - (key%7);
        }

        void insertItem(int key){
            int index = hash1(key);

            if(table[index] == -1){
                table[index] = key;
                return;
            }
            int step = hash2(key);
            
            for(int i=0; i<size; i++){
                int newIndex = (index + i* step)% size;

                if(table[newIndex] == -1){
                    table[newIndex] = key;
                    return;
                }
            }
            cout<<"Table Full! Cannot insert."<<endl;
        }

        bool searchingItem(int key){
            int index = hash1(key);

            if(table[index] == key){
                return true;
            }

            int step = hash2(key);
            for(int i=0; i<size; i++){
                int newIndex = (index + i*step) % size;

                if(table[newIndex] == key){
                    return true;
                }

                if(table[newIndex] == -1){
                    return false;
                }
            }
            return false;
        }

        void display(){
            for(int i=0; i<size; i++){
                cout<<i<<" -> "<<table[i]<<endl;
            }
        }
};

int main(){
    HashTable h(7);

    h.insertItem(12);
    h.insertItem(15);
    h.insertItem(63);
    h.insertItem(76);
    h.insertItem(43);
    h.insertItem(20);

    h.display();
    cout<<"Searching Item :63 "<<endl;

    if(h.searchingItem(63)){
        cout<<"Key Found.....\n";
    }else{
        cout<<"Key Not Found...."<<endl;
    }
    return 0;
    
}