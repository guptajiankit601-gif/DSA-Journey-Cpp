#include <iostream>
using namespace std;

int NthRoot(int n, int m){
    int s = 1;
    int e = m;

    while(s <= e){
        int mid = s + (e - s) / 2;

        long long power = 1;

        for(int i = 0; i < n; i++){
            power = power * mid;
        }

        if(power == m){
            return mid;
        }
        else if(power < m){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return -1;
}

int main(){
    int n, m;

    cout<<"Enter n and m: ";
    cin>>n>>m;

    cout<<"Answer is " << NthRoot(n, m)<<endl;

    return 0;
}
