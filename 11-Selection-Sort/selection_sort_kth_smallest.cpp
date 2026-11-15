#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    for(int i = 0; i < k; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    return arr[k - 1];
}

int main(){
    int arr[] = {8, 3, 5, 1, 9};
    int n = 5;
    int k = 3;

    cout<<kthSmallest(arr,n,k);

    return 0;
}
