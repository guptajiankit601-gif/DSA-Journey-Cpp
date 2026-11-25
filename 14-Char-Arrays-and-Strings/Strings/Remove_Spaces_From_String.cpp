#include<iostream>
using namespace std;
string removeSpaces(string s){
    string temp = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] != ' '){
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    getline(cin,s);
   
    cout<<"Original String: "<<s<<endl;
    cout<<"String After Removing Spaces: "<<removeSpaces(s)<<endl;

    return 0;
}
