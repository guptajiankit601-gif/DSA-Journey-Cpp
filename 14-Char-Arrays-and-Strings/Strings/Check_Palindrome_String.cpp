#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;


    while(start < end){
        if(s[start] == s[end]){
            start++;
            end--;
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    string s;
    getline(cin,s);

    if(isPalindrome(s)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}
