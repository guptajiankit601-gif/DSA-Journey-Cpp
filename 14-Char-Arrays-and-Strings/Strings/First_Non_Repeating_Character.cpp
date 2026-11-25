#include<iostream>
using namespace std;
char firstNonRepeating(string s){
    
    for(int i = 0; i<s.length(); i++){
        int count = 0;
        for(int j = 0; j<s.length(); j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(count == 1){
            return s[i];
        }
    }
    return '\0';
}
int main(){
    string s;
    getline(cin,s);
   
    char ans = firstNonRepeating(s);
    if(ans == '\0'){
        cout << "No Non-Repeating Character" << endl;
    }
    else{
        cout << "First Non-Repeating Character: " << ans << endl;
    }
    return 0;
}
