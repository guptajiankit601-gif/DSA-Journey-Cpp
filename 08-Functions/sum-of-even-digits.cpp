#include<iostream>
using namespace std;
int sumofEvendigits(int n){
    if(n < 0){
        n = -n;
    }
    
    int sum = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Sum of Even Digits is: "<<sumofEvendigits(n)<<endl;

    return 0;
}
