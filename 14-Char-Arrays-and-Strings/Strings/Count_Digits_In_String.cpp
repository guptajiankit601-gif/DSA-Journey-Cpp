#include<iostream>
using namespace std;
int countDigits(string s){
    int count = 0;
    
    for(int i = 0; i<s.length(); i++){  
        if(s[i] >= '0' && s[i] <= '9'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);

    cout<<"Total digits are: "<<countDigits(s)<<endl;

    return 0;
}
