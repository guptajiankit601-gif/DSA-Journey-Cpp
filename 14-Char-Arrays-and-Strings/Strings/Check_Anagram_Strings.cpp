#include<iostream>
using namespace std;

bool areAnagrams(string s1, string s2){
    if(s1.length() != s2.length()){
        return 0;
    }
    for(int i = 0; i<s1.length(); i++){
        bool found = false;
        for(int j = 0; j<s2.length(); j++){
            if(s1[i] == s2[j]){
                s2[j] = '\0';
                found = true;
                break;
            }
        }
        if(found == false){
            return 0;
        }
    }
    return 1;
}
int main(){
    string s1;
    string s2;

    getline(cin,s1);
    getline(cin,s2);

    if(areAnagrams(s1,s2)){
        cout<<"Anagrams"<<endl;
    }else{
        cout<<"Not a anagrams"<<endl;
    }
}
