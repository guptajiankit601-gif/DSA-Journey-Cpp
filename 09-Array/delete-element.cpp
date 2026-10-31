#include<iostream>
using namespace std;
void deleteElement(int arr[],int size,int position){
    for(int i = position; i< size - 1; i++){
        arr[i] = arr[i+1];
    }
    size--;

    cout<<"Updated Array: ";

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[10] = {10,20,30,50,60,70,80};
    int size = 7;
    int position = 3;

    deleteElement(arr,size,position);

    return 0;
}
