#include<iostream>
using namespace std;

int lcm(int a,int b){
    int i;
    if(a>b){
        i = a;
    }else{
        i = b;
    }

    while(true){
        if(i % a == 0 && i % b == 0){
            return i;
        }
        i++;
    }
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"LCM: "<<lcm(a,b)<<endl;

    return 0;
}
