#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,22,7,9,31,5,13};
    int n = 7;
    int count = 0;
    for(int i = 1; i<n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total swaps: "<<count;
}
