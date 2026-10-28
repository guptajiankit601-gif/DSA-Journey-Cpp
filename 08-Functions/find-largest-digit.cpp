#include<iostream>
using namespace std;

int largestDigit(int n){
    if(n < 0){
        n = -n;
    }

    int largest = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit > largest){
            largest = digit;
        }
        
        n /= 10;
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"largest digit is: "<<largestDigit(n)<<endl;

    return 0;
}
