#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,1,4,7,8};
    int n = 5;
    for(int i = 1; i<n; i++){
        bool swapped = false;
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
