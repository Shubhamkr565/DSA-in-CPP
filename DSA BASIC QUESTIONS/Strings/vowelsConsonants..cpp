// Count vowels and consonants.

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter a string "<<endl;
//     getline(cin, str);

//     int vowels = 0, consonants = 0;

//     for(char ch: str){
//         ch = tolower(ch);

//         if(ch >= 'a' && ch <= 'z'){
//             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//                 vowels++;
//             }else{
//                 consonants++;
//             }
//         }
//     }

//     cout<<"Vowels = "<<vowels<<endl;
//     cout<<"Consonants = "<<consonants<<endl;

//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello World";

    int vowel = 0, consonante = 0;

    for(char ch : str){
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowel++;
            }else{
                consonante++;
            }
        }
    }
    cout<<"Vowel: "<<vowel<<endl;
    cout<<"Consonante: "<<consonante<<endl;
}