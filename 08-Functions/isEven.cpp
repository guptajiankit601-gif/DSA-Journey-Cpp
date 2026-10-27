#include<iostream>
using namespace std;

bool isEven(int num){
    if(num & 1){
        return 0;
    }
    return 1;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isEven(n)){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
    return 0;
}
