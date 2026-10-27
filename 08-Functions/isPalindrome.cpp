#include<iostream>
using namespace std;

bool isPalindrome(int n){
    if(n < 0){
        return 0;
    }
    int original = n;
    int rev = 0;

    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if(original == rev){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
   

    if(isPalindrome(n)){
        cout<<"Palindrome Number"<<endl;
    }else{
        cout<<"Not a Palindrome number"<<endl;
    }
    return 0;
}
