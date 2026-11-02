#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[],int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main() {
    int arr[] = {0, 2, 5, 3, 1};
    int size = 5;

    cout<<"Peak Index: "<<peakIndexInMountainArray(arr,size);

    return 0;
}
