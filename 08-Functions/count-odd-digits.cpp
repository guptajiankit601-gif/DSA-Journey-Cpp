#include<iostream>
using namespace std;
int countOdd(int n){
    if(n < 0){
        n = -n;
    }

    int count = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0){
            count++;
        }
        n /= 10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Odd Digits =  "<<countOdd(n)<<endl;

    return 0;
}
