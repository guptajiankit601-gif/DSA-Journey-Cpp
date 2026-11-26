#include<iostream>
using namespace std;
int removeDuplicates(string &s){
    int index = 0;

    for(int i = 0; i<s.length(); i++){
        bool found = false;
        for(int j = 0; j<index; j++){
            if(s[i] == s[j]){
                found = true;
                break;
            }
        }
        if(found == false){
            s[index] = s[i];
            index++;
        }
    }return index;
}
int main(){
    string s;
    getline(cin,s);

    int len = removeDuplicates(s);

    for(int i = 0; i< len; i++){
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}


//Using temp to solve the problem
// #include<iostream>
// using namespace std;
// string removeDuplicates(string s){
//     string temp = "";
//     for(int i = 0; i<s.length(); i++){
//         bool found = false;
//         for(int j = 0; j<i; j++){
//             if(s[i] == s[j]){
//                 found = true;
//                 break;
//             }
//         }
//         if(found == false){
//             temp += s[i];
//         }
//     }return temp;
// }
// int main(){
//     string s;
//     getline(cin,s);

//     cout<<removeDuplicates(s)<<endl;

//     return 0;
// }
