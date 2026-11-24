#include<iostream>
using namespace std;
string reverse(string s){
    int start = 0;
    int end = s.length() - 1;

    while(start < end){
        swap(s[start++],s[end--]);
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);

    cout<<reverse(s);

    return 0;
}
