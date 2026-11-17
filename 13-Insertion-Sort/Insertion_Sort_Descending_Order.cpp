#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,5,3,9,1};
    int size = 5;

    for(int i = 1; i<size; i++){
        int temp = arr[i];

        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] < temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
