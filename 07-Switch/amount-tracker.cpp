#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter your amount: ";
    cin>>amount;

    switch(100){
        case 100: cout<<"100 rupees: "<<amount/100<<endl;
            amount %= 100;
    switch(50){
        case 50: cout<<"50 rupees: "<<amount/50<<endl;
            amount %= 50;
    switch(20){
        case 20: cout<<"20 rupees: "<<amount/20<<endl;
            amount %= 20;
    switch(1){
        case 1: cout<<"1 rupees: "<<amount/1<<endl;
            }
        }
    }
}
}
