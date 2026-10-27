#include<iostream>
using namespace std;

int isPerfectno(int n){

    if(n <= 1){
        return 0;
    }
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(isPerfectno(n)){
        cout<<"Perfect number."<<endl;
    }else{
        cout<<"Not a Perfect number."<<endl;
    }
    return 0;
}
