#include<iostream>
using namespace std;

bool sortArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50}; 

    if(sortArray(arr,5) == 1){
        cout<<"Array is Sorted";
    }else{
        cout<<"Array is not Sorted";
    }
    
    return 0;
}
