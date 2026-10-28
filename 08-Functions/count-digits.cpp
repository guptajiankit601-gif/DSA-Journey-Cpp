#include<iostream>
using namespace std;
int countdigits(int n){
    if(n == 0){
        return 1;
    }

    int count = 0;

    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Digits =  "<<countdigits(n)<<endl;

    return 0;
}
