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
                table[i]= -1;
            }
        }

    int hashFun(int key){
        return key%size;
    }
    void insertItem(int key){
        int index = hashFun(key);

        if(table[index] == -1){
            table[index] = key;
            return;
        }
        for(int i = 1; i<size; i++){
            int newIndex = (index + i*i) % size;

            if(table[newIndex] == -1){
                table[newIndex] = key;
                return;
            }
        }
        cout<<"Hash table is Full Cannot inset.\n";
    }

    bool searchingItem(int key){
        int index = hashFun(key);
        
        if(table[index] == key){
            return true;

            for(int i=0; i<size; i++){
                int newIndex = (index + i*i) % size;

                if(table[newIndex] == key){
                    return true;
                }

                if(table[newIndex] == -1){
                    return false;
                }
            }
        }

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
    h.insertItem(323);
    h.insertItem(15464);
    h.insertItem(56);
    h.insertItem(27);
    h.insertItem(674);

    h.display();

    h.searchingItem(27);
    

}