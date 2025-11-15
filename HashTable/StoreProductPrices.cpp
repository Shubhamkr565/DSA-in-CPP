// Problem 5: Store Product Prices

// Task:
// unordered_map<string, float>

// key = product name

// value = price

// Add:
// Milk, Bread, Rice, Sugar, Oil

// Search for "Rice"
// Agar price mil jaye to print price; warna “Not Found”.



#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, float> Products;

    Products["Milk"] = 50;
    Products["Bread"] = 45;
    Products["Rice"] = 80;
    Products["Sugar"] = 60;
    Products["Oil"] = 150;

    string Product_Name = "Rice";
    if(Products.find(Product_Name) != Products.end()){
        cout<<Product_Name<<" price: "<<Products.at(Product_Name);
    }else{
        cout<<"Not Found."<<endl;
    }
}