// Problem 3: Search an Element

// Ask the user for a number → Check if it exists in the set.

// 👉 Use if(s.find(x) != s.end()).

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s = {10, 20, 30, 40, 50};

    int x;
    cout << "Enter number to search: ";
    cin >> x;

    if(s.find(x) != s.end()){
        cout << x << " is present in the set!" << endl;
    }else{
        cout << x << " is NOT present in the set!" << endl;
    }

    return 0;
}
