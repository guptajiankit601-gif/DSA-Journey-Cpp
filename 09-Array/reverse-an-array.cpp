#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){

    for(int i = size-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6] = {12, 45, 7, 89, 23, 56};

    reverseArray(arr,6);

    return 0;
}
