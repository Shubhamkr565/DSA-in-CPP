// Brand Logo of a Company
// Problem Title
// Find First Common Character by Minimum Index


// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
    
//     string s1 = "Shubham";
//     string s2 = "Gupta";
    
//     cout << "str1 characters:\n";
//     for(int i=0; i<s1.size(); i++){
//         cout<<i<<" = "<<s1[i]<<endl;
//     }

//     cout << "\nstr2 characters:\n";
//     for(int i=0; i<s2.size(); i++){
//         cout<<i<<" = "<<s2[i]<<endl;
//     }
    
//     bool isPresent[256] = {false};

//     for(char s: s2){
//         isPresent[s] = true;
//     }
//     for(int i=0; i<s1.length(); i++){
//         if(isPresent[s1[i]]){
//             cout<<"first Common char: "<<s1[i]<<endl;
//             return 0;
//         }
//     }
//     cout<<"-1"<<endl;
// }




#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "abcd";

    // bool ispresent[256] = {false};
    
    unordered_set<char> st;
    
    for(char c: s2){
        // ispresent[c] = true;
        st.insert(c);
    }

    for(int i=0; i<s1.length(); i++){
        if(st.find(s1[i]) != st.end()){
            cout<<"First comman char present: "<<s1[i]<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;

}