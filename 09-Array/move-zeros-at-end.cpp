#include<iostream>
using namespace std;

void moveZeros(int arr[],int size){
    int index = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] != 0){
            arr[index] = arr[i]; 
            index++;
        }
    }
    for(int i = index; i<size; i++){
        arr[i] = 0;
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {0,2,0,3,12};

    moveZeros(arr,5);

    return 0;
}
