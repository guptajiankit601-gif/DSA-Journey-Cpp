#include<iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    int count = 0;
    for(int i = 0; i < n -1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        if(minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    cout<<"Total number of swaps is: "<<count<<endl;
    return 0;   
}
int main(){
    int arr[5] = {5, 3, 8, 1, 2};
    
    SelectionSort(arr,5);

    for(int i = 0; i< 5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
