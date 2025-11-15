// Problem 1: Store Employee Salary

// Task:
// unordered_map<int, int> banao jisme

// key = employee ID

// value = salary

// Example:

// Add 5 employees

// Print all

// Search for an employee ID = 103

// Expected Output Example:

// Found: 101 -> 50000
// Found: 102 -> 45000
// ...
// Employee Found: 103 -> 55000


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int , int > Employee;

    Employee[101] = 50000;
    Employee[102] = 45000;
    Employee[103] = 60000;
    Employee[104] = 40000;
    Employee[105] = 55000;

    for(auto &E: Employee){
        cout<<"Employee: "<<E.first<<" -> "<<E.second<<endl;
    }

    int ID = 103;
    if(Employee.find(ID) != Employee.end()){
        cout<<"Found: "<<ID<<" -> "<<Employee[ID]<<endl;
    }else{
        cout<<"Not Found:"<<endl;
    }
}