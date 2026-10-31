#include<iostream>
using namespace std;
void secondLargest(int arr[],int size){
    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i<size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    cout<<"Second largest: "<<secondLargest<<endl;
}
int main(){
    int arr[5] = {10,20,30,40,50};

    secondLargest(arr,5);

    return 0;
}
