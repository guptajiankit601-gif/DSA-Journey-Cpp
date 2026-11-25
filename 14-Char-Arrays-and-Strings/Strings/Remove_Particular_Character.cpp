#include<iostream>
using namespace std;
string removeCharacter(string s, char ch){
    string temp = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] != ch){
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    getline(cin,s);
    char ch;
    cin>>ch;
   
    cout<<removeCharacter(s,ch)<<endl;

    return 0;
}
