#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[6] = {12, 45, 7, 89, 23, 56};
    int key = 23;

    int result = linearSearch(arr,6,key);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    }else{
        cout<<"Element not found";
    }
    
    return 0;
}
