#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int prod = 1;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }

    int answer = prod - sum;

    cout<<"The final answer is: "<<answer<<endl;

    return 0;
}
