#include<iostream>
using namespace std;

int main(){
    int num = 2;
    char ch = 'a';

    switch(ch){
        case 1: cout<<"First number";
            break;
        case 2: cout<<"Second Number";
            break;
        case 'a':
            cout<<"It is a charcter";
            break;
            cout<<"It's is 'a'.";
        default:
            cout<<"It is a default case.";
    }



    // switch(ch){
    //     case 1:
    //         cout<<"First number";
    //         break;
    //     case 'a':
    //         switch(num){
    //             case 2: cout<<"Second Number";
    //             break;
    //         }break;
    //     default:
    //         cout<<"This is a default case";
    // }
}
