#include<iostream>
using namespace std;
int countFrequency(string s, char ch){
    int count = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ch){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    char ch;
    cin>>ch;
   
    cout<<"Frequency: "<<countFrequency(s,ch)<<endl;

    return 0;
}
