#include<iostream>
using namespace std;
int countVowels(string s){
    int count = 0;
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || 
            s[i] == 'i' || s[i] == 'o' || 
            s[i] == 'u' || s[i] == 'A' || 
            s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);

    cout<<"Total vowels are: "<<countVowels(s)<<endl;

    return 0;
}
