#include<iostream>
using namespace std;

int smallestDigit(int n){
    if(n < 0){
        n = -n;
    }

    if(n == 0){
        return 0;
    }
    int smallest = 9;

    while(n > 0){
        int digit = n % 10;

        if(digit < smallest){
            smallest = digit;
        }
        
        n /= 10;
    }
    return smallest;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Smallest digit is: "<<smallestDigit(n)<<endl;

    return 0;
}
