#include<iostream>
using namespace std;

int sumOfDigit(int n){
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int ans = sumOfDigit(n);
    cout<<"The sum of digit is: "<<ans<<endl;
}
