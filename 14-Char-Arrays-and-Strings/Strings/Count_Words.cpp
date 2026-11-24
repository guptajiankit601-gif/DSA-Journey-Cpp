#include<iostream>
using namespace std;
int countWords(string s){
    int count = 0;
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);

    cout<<"Total Words are: "<<countWords(s)<<endl;

    return 0;
}
