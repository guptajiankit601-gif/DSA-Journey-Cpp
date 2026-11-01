#include<iostream>
using namespace std;

int searchInsert(int arr[],int size,int target){
    int start = 0, end = size - 1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    int arr[4] = {1,2,5,6};
    int target = 3;

    cout<<"Insert Position: "
        <<searchInsert(arr,4,target);
}
