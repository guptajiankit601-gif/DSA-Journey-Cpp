#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,4,9,2,5,8,3,6};
    int size = 8;

    for(int i = 1; i<size; i++){
        if(arr[i] % 2 != 0) 
            continue;

        int temp = arr[i];
        int j = i - 1;

        while(j >= 0){
            if(arr[j] % 2 != 0){
                j--;
            }
            else if(arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
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
