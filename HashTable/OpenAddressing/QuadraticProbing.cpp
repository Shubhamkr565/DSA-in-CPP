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

            if(table[index] == -1){
                table[index] = key;
                return;
            }
            for(int i=0; i<size; i++){
                int newIndex = (index + i*i)%size;

                if(table[newIndex] == -1){
                    table[newIndex] = key;
                    return;
                }
            }
            cout<<"Hash Table is Full cannot insert :"<<endl;
        }

        bool searchingItem(int key){
            int index = hashFun(key);

            if(table[index] == key){
                return true;
            }

            for(int i=0; i<size; i++){
                int newIndex = (index + i*i) % size;

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
    h.insertItem(14);
    h.insertItem(16);
    h.insertItem(121);
    h.insertItem(19);
    h.insertItem(78);
    h.insertItem(91);
    
    
    
    h.display();
    cout<<"Searching Item: 16 "<<endl;
    if(h.searchingItem(16)){
        cout<<"Key Found: \n"<<endl;
    }else{
        cout<<"Not Found: \n"<<endl;
    }
    return 0; 
}