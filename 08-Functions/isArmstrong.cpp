#include<iostream>
using namespace std;

bool isArmstrong(int n){
    
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    while(temp > 0){
        digits++;
        temp /= 10;
    }
    temp = n;

    while(temp > 0){
        int digit = temp % 10;
        int power = 1;

        for(int i = 1; i<=digits;i++){
            power = power * digit;
        }
        sum = sum + power;
        temp /= 10;
    }
    
    if(sum == original){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<"Armstrong number.";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}
