#include<iostream>
using namespace std;
void insertElement(int arr[],int size,int element,int position){
    for(int i = size - 1; i>=position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = element;
    size++;

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[15] = {10,20,30,50,60,70,80};
    int size = 7;
    int element = 40;
    int position = 3;

    insertElement(arr,size,element,position);

    return 0;
}
