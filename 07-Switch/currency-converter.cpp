#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount;

    cout<<"1. INR to USD"<<endl;
    cout<<"2. INR to EUR"<<endl;
    cout<<"3. INR to NPR"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    cout<<"Enter amount in INR: ";
    cin>>amount;

    switch(choice) {
        case 1:
            cout<<"USD = "<<amount * 0.011;
            break;

        case 2:
            cout<<"EUR = "<<amount * (1.0 / 102);
            break;

        case 3:
            cout<<"NPR = "<<amount * (1.0 / 0.625);
            break;

        default:
            cout<<"Invalid Choice";
    }
    return 0;
}
