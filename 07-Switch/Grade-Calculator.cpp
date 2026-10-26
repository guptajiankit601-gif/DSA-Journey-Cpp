#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    switch(marks/10){
        case 10:
        case 9:
            cout<<"Grade A";
            break;
        case 8:
            cout<<"Grade B";
            break;
        case 7:
            if(marks >= 75){
                cout<<"Grade B";
            }else{
                cout<<"Grade C";
            }break;
        case 6:
            cout<<"Grade C";
            break;
        case 5:
        case 4:
            cout<<"Grade D";
            break;
        default:
            cout<<"Fail";
    }
    return 0;
}
