#include<iostream>
using namespace std;
char firstRepeatingCharacter(string s){
    
    for(int i = 0; i<s.length(); i++){
        for(int j = i + 1; j<s.length(); j++){
            if(s[i] == s[j]){
                return s[i];
            }
        }   
    }
    return '\0';
}
int main(){
    string s;
    getline(cin,s);
   
    char ans = firstRepeatingCharacter(s);
    if(ans == '\0'){
        cout << "No Repeating Character" << endl;
    }
    else{
        cout << "First Repeating Character: " << ans << endl;
    }
    return 0;
}
