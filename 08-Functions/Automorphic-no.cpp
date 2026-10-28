#include <iostream>
using namespace std;

int isAutomorphic(int n) {
    if (n < 0){
        return 0;
    }

    int square = n * n;
    int temp = n;

    while(temp > 0){
        if(temp % 10 != square % 10){
            return 0;
        }
        temp = temp / 10;
        square = square / 10;
    }

    return 1;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(isAutomorphic(n) == 1){
        cout<<"Automorphic Number";
    }else{
        cout<<"Not an Automorphic Number";
    }
    return 0;
}
