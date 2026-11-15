#include<iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    for(int i = 0; i < n -1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    return 0;
}
int main(){
    int arr[5] = {96,69,11,23,53};

    SelectionSort(arr,5);

    for(int i = 0; i< 5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
