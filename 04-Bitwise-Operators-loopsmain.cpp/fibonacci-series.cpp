#include<iostream>
using namespace std;

int main(){
    int n = 10;

    int first = 0;
    int second = 1;

    cout<<first<<" "<<second<<" ";

    for(int i = 1; i <= n; i++){
        int nextNumber = first + second;
        cout<<nextNumber<<" ";

        first = second;
        second = nextNumber;
    }
    return 0;
}
