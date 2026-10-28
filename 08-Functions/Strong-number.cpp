#include<iostream>
using namespace std;

int StrongNo(int n){
    if(n < 0){
        return 0;
    }
    int original = n;
    int sum = 0;
    
    while(n > 0){
        int digit = n % 10;
        
        int fact = 1;
        for(int i = 1; i<=digit; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        n /= 10;
    }
    if(sum == original){
        cout<<original<<" is a Strong Number."<<endl;
    }else{
        cout<<original<<" is not a Strong Number."<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    StrongNo(n);

    return 0;

}
