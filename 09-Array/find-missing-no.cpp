#include<iostream>
using namespace std;

void findMissing(int arr[],int size,int N){
    int expectedSum = N * (N+1) / 2;
    int actualSum = 0;

    for(int i =0; i<size; i++){
        actualSum = actualSum + arr[i];
    }

    int missing = expectedSum - actualSum;

    cout<<"Missing number: "<<missing;
}
int main(){
    int arr[6] = {1,2,3,5,6,7};
    int N = 7;

    findMissing(arr,6,7);

    return 0;
}
