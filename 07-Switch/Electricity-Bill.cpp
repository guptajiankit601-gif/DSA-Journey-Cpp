#include<iostream>
using namespace std;

int main(){
    int units,bill;

    cout<<"Enter your Electricity units: ";
    cin>>units;

    switch(units/100){
        case 0:
            bill = units * 5;
            break;

        case 1:
            bill = 100 * 5 + (units - 100) * 7;
            break;
        
        default:
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    }
    if(units >= 0){
        cout<<"Electricity Bill = Rs. "<<bill;
    }else{
        cout<<"invalid units";
    }
    return 0;

}
