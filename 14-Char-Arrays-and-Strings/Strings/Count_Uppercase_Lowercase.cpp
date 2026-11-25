#include<iostream>
using namespace std;
void countCases(string s){
    int Lowercase = 0;
    int Uppercase = 0;  
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            Lowercase++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            Uppercase++;
        }
    }
    cout<<"Lowercase: "<< Lowercase<<endl;
    cout<<"Uppercase: "<< Uppercase<<endl;
}
int main(){
    string s;
    getline(cin,s);
   
    countCases(s);

    return 0;
}
