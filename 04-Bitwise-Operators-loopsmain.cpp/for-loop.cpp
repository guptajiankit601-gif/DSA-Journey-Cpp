#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the value of n: ";
    // // cin>>n;

    // cout<<"Printing count from 1 to n"<<endl;

    // for(int i = 1; i <= n; i++){
    //     cout<< i << endl;
    // }


    // for(int a = 0, b = 1, c = 2; 
    //     a>=0 && b>=1 && c >=2;
    //     a--,b--,c--){
    //     cout<< a << " " << b << " " << c << " " << endl;
    // }

// # For finding total sum:-
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<"Total sum is: "<<sum<<endl;
    
}
