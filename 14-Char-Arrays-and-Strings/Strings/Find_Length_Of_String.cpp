#include<iostream>
using namespace std;
int length(string s){
    
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);

    cout<<"Total Length is: "<<length(s)<<endl;

    return 0;
}
