// Problem 3: Student Marks

// Task:
// unordered_map<string, int>

// key = student name

// value = marks

// Add names:
// Amit, Sumit, Rahul, Neha, Pooja

// Print sabhi pairs
// Check if "Rahul" exists.

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> Students;

    Students["Amit"] = 98;
    Students["Sumit"] = 93;
    Students["Rahul"] = 88;
    Students["Neha"] = 89;
    Students["Pooja"] = 97;

    for(auto &S: Students){
        cout<<S.first<<" Marks obtain -> "<<S.second<<endl;
    }

    string name = "Rahul";
    if(Students.find(name) != Students.end()){
        cout<<"Search by name: "<<name<<" Marks obtain -> "<<Students.at(name)<<endl;
    }else{
        cout<<"Not Found."<<endl;
    }
    return 0;
}