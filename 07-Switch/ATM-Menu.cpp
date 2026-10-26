#include<iostream>
using namespace std;

int main(){
    int choice,amount;
    int balance = 5000;

    cout<<"1. Check Balance: "<<endl;
    cout<<"2. Deposit Money: "<<endl;
    cout<<"3. Withdraw Money: "<<endl;
    cout<<"4. Exit: "<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Balance = Rs. "<<balance<<endl;
            break;
        case 2:
            cout<<"Enter Deposit Amount: ";
            cin>>amount;
            balance = balance + amount;
            cout<<"Updated balance = Rs. "<<balance<<endl;
            break;
        case 3:
            cout<<"Enter Withdraw amount: ";
            cin>>amount;

            if(amount <= balance && amount > 0){
                balance = balance - amount;
                cout<<"Updated balance = Rs. "<<balance;
            }else{
                cout<<"Insufficient Balance or Invalid Amount.";
            }
            break;
        case 4:
            cout<<"Thank you!";
            break;
        default:
            cout<<"invalid Choice";
    }
    return 0;
}
