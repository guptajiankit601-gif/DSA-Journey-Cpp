#include<iostream>
using namespace std;

int main(){
    int choice;

    cout<<"1. Circle"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Square"<<endl;

    float side,length,breadth,radius;

    cout<<"Enter your Choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter radius: ";
            cin>>radius;
            cout<<"Area = "<<3.14 * radius * radius<<endl;
            break;
        case 2:
            cout<<"Enter length and breadth: ";
            cin>>length>>breadth;
            cout<<"Area = "<<length * breadth;
            break;
        case 3:
            cout<<"Enter side: ";
            cin>>side;
            cout<<"Area = "<<side * side<<endl;
            break;
        default:
            cout<<"Invalide choice.";
    }
    return 0;
}
