#include<iostream>
using namespace std;

int main(){
    char shape;

    cout<<"Enter R,S or T: ";
    cin>>shape;

    switch(shape){
        case 'R':
        case 'r':
            cout<<"Rectangle";
            break;
        case 'S':
        case 's':
            cout<<"Square";
            break;
        case 'T':
        case 't':
            cout<<"Triangle";
            break;

        default: cout<<"Invalid Shape";
    }
    return 0;
}
