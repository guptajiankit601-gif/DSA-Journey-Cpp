#include<iostream>
using namespace std;
int sumofArray(int arr[],int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    int ans = sumofArray(arr,5);
    cout<<"Sum is: "<<ans<<endl;
    return 0;
}
