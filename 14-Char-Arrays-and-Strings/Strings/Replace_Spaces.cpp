#include<iostream>
using namespace std;
string replaceSpaces(string s){
    string temp = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' '){
            temp.push_back('@');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    getline(cin,s);
   
    cout<<"Original String: "<<s<<endl;
    cout<<"String After Replacing Spaces: "<<replaceSpaces(s)<<endl;

    return 0;
}
