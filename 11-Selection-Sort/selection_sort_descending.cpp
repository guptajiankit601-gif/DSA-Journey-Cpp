#include<iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    for(int i = 0; i < n -1; i++){
        int maxIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[maxIndex] < arr[j])
                maxIndex = j;
        }
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
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
