// Problem 2: Country–Capital Map

// Task:
// unordered_map<string, string> banao jisme

// key = country

// value = capital

// Add 5 items:
// India, USA, Japan, Nepal, China

// Print sabhi key-value pairs
// Search for "Japan"


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, string> Country;

    Country["India"] = "New Delhi";
    Country["USA"] = "Washington, D.C.";
    Country["Japan"] = "Tokyo";
    Country["Nepal"] = "Kathmandu";
    Country["China"] = "Beijing";
    

    cout<<"All Countries and Capitals:"<<endl;
    for(auto &C: Country){
        cout<<"Country -> "<<C.first<<" Capital: "<<C.second<<endl;
    }

    string searchKey = "Japan";
    if(Country.find(searchKey) != Country.end()){
        cout<<"Search for "<<searchKey<<" -> Capital: "<<Country[searchKey]<<endl;
    }else{
        cout<<"Not Found."<<endl;
    }
    return 0;
}