#include<iostream>
using namespace std;
string reverseWords(string s){
    string ans = "";
    int i = s.length() - 1;

    while(i>=0){
        while(i>=0 && s[i] == ' '){
            i--;
        }
        if(i<0){
            break;
        }
        int end = i;
        while(i>=0 && s[i] != ' '){
            i--;
        }
        int start = i + 1;
        if(ans.length() > 0){
            ans += " ";
        }
        ans += s.substr(start,end - start + 1);
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);

    cout<<reverseWords(s)<<endl;

    return 0;
}
