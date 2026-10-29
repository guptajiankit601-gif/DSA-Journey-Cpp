#include<iostream>
using namespace std;
int findMaximum(int arr[],int size){

    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }return max;
}
int main(){

    int arr[6] = {12, 45, 7, 89, 23, 56};

    cout<<"Maximum is: "<<findMaximum(arr,6);

    return 0;
}
