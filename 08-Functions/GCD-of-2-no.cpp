#include<iostream>
using namespace std;

int gcd(int a,int b){
    int ans = 1;

    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            ans = i;
        }
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"GCD = "<<gcd(a,b)<<endl;

    return 0;
}
