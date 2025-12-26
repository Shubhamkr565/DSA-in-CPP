// An airline loads m bags but only n bags (n = m − 1) arrive after the flight.
// Bag IDs are non-negative integers.
// Given:
// IDs at departure
// IDs at arrival (scrambled)
// Find the missing bag ID.


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int DP;
//     cout<<"Enter number of Bag Departure: ";
//     cin>>DP;
//     vector<int> Departure(DP);


//     int AS;
//     cout<<"Enter Number of Bag Arrival: ";
//     cin>>AS;
//     vector<int> Arrival(AS);
//     int sumDP = 0;
//     int sumAR = 0;

//     cout<<"Enter IDs at departure: "<<endl;
//     for(int i=0; i<DP; i++){
//         cin>>Departure[i];
//     }
//     cout<<"Enter IDs at Arrival: "<<endl;
//     for(int i=0; i<AS; i++){
//         cin>>Arrival[i];
//     }

//     for(int i=0; i<DP; i++){
//         sumDP += Departure[i];
//     }
//     for(int j=0; j<AS; j++){
//         sumAR += Arrival[j];
//     }
//     cout<<"Missing Bag ID: ";
//     cout<<(sumDP-sumAR)<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cout << "Enter number of test cases: ";
//     cin >> T;

//     while (T--) {
//         int m, n;
//         cout << "\nEnter number of bags at departure (m): ";
//         cin >> m;

//         cout << "Enter number of bags at arrival (n): ";
//         cin >> n;

//         int sumDep = 0, sumArr = 0, x;

//         cout << "Enter bag IDs at departure:\n";
//         for (int i = 0; i < m; i++) {
//             cin >> x;
//             sumDep += x;
//         }

//         cout << "Enter bag IDs at arrival:\n";
//         for (int i = 0; i < n; i++) {
//             cin >> x;
//             sumArr += x;
//         }

//         cout << "Missing Bag ID: " << (sumDep - sumArr) << endl;
//     }

//     return 0;
// }




// if missing bax is more than one?

#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter Total Number of bags departure: ";
    int d;
    cin>>d;
    vector<int> dep(d);
    cout<<"Enter Total Number of bags arrivals: ";
    int a;
    cin>>a;
    vector<int> arr(a);
    cout<<"Enter Departure bags ID: "<<endl;
    for(int i=0; i<d; i++){
        cin>>dep[i];
    }
    cout<<"Enter Arrival bags ID: "<<endl;
    for(int j=0; j<a; j++){
        cin>>arr[j];
    }

    vector<int> miss;
    for(int i=0; i<d; i++){
        bool found = false;

        for(int j=0; j<a; j++){
            if(dep[i] == arr[j]){
                found = true;
                break;
            }
        }
        if(!found){
            miss.push_back(dep[i]);
        }
    }
    cout<<"Missing bags id: ";
    for(int id: miss){
        cout<<id<<" ";
    }
    return 0;

}