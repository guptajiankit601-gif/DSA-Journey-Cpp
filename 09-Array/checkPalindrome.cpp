#include<iostream>
using namespace std;
void checkPalindrome(int arr[],int n){
    bool isPalindrome = true;

    for(int i = 0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome == true){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}
int main(){
    int arr[5] = {10,20,40,20,10};

    checkPalindrome(arr,5);

    return 0;
}
