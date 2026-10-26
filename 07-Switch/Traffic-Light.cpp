#include<iostream>
using namespace std;

int main(){
    char shape;

    cout<<"Enter R,Y or G: ";
    cin>>shape;

    switch(shape){
        case 'R':
        case 'r':
            cout<<"Stop";
            break;
        case 'Y':
        case 'y':
            cout<<"Wait";
            break;
        case 'G':
        case 'g':
            cout<<"Go";
            break;

        default: cout<<"Invalid Color";
    }
    return 0;
}
